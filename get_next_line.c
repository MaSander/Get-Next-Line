/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:06:50 by msander-          #+#    #+#             */
/*   Updated: 2022/06/02 14:06:57 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_concat_buff(char *buff, char *str,int strlen)
{
	int		count;
	char	*concat;

	concat = malloc(BUFFER_SIZE + strlen);
	count = 0;
	while (strlen > count++)
		concat[count] = str[count];
	count = 0;
	while ((strlen + BUFFER_SIZE > count) || buff[count])
	{
		concat[strlen + count] = buff[count];
		count++;
	}
	
	return (concat);
}

char *get_next_line(int fd)
{

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

	ssize_t			size;
	char			*buff;
	static	char	*str;
	char			*next_line;

	next_line = 0;
	size = 0;

	while (next_line == 0)
	{
		buff = malloc(BUFFER_SIZE);
	
		size =+ read(fd, buff, BUFFER_SIZE);
		str = ft_concat_buff(buff, str, size);
		next_line = ft_have_complete_line(str);
		free(buff);
	}
	
	return ft_return_line(str);
}
