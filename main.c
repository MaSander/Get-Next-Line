/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:02:07 by msander-          #+#    #+#             */
/*   Updated: 2022/06/07 00:17:00 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h> 
#include <unistd.h>

int main()
{
    int i = 20;
    int line_count = 0;
    char    *result_line;

    printf("\n\t ____START____\n");
    
    int fd = open("teste", O_RDONLY);

    while(i--)
    {
        result_line = get_next_line(fd);
        printf("%s", result_line);
    }

    printf("\n\t ____DONE____");
    close(fd);
}
