/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:02:07 by msander-          #+#    #+#             */
/*   Updated: 2022/06/08 13:23:25 by msander-         ###   ########.fr       */
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
    //int fd = 0;

    while(i--)
    {
        result_line = get_next_line(fd);
        printf("::%s", result_line);
    }

    printf("\n\t ____DONE____");
    close(fd);
}
