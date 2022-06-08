/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:02:07 by msander-          #+#    #+#             */
/*   Updated: 2022/06/08 13:26:03 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h> 
#include <unistd.h>

int main()
{
    int i = 15;
    int line_count = 0;
    char    *result_line;

    printf("\n\t ____START____\n");
    
    int fd = open("teste", O_RDONLY);
    while(i--)
    {
        result_line = get_next_line(fd);
        printf("::%s", result_line);
    }

    printf("\n\t ____DONE____");
    close(fd);
}

/*
	OBJETIVOS:
		pegar uma linha usando um buff > linha
		pegar uma linha usando um buff < linha
		pegar duas linhas usando um buff == linha (usar duas leitura, uma pra cada linha)
		pegar duas linhas usando um buff < linha
		pegar todas as linhas do arquivo
		pegar o buffer do FD = 0 (stdin, o que o cara digitar vai ter que ser replicado pelo gnl)
*/

/*

1		verificar se no resultado tem '\n' || '\0'
1.3			chamar *ft_return_line se tiver linha completa
1.3			criar str da nova linha
1.3			verificar onde ta a nova linha
1.3			salva o resto na static
1.3			retorna a linha

*/