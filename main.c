/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:02:07 by msander-          #+#    #+#             */
/*   Updated: 2022/06/05 23:39:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

<<<<<<< HEAD
    int i = 20;
    int line_count = 0;
    char    *result_line;

    printf("\n\t ____START____\n");

    while(i--)
    {
//        printf("linha %i:", line_count++);
        result_line = get_next_line(fd);
        printf("%s", result_line);
    }

    printf("\n\t ____DONE____");
    close(fd);
=======
char    *get_next_line(int fd);
int	ft_isascii(int c);
size_t	ft_strlen(const char *c);
char	*ft_get_end_line(char *buff);
char	*ft_return_line(char *buff);
char    *ft_strdup(char *str, int size);
int     ft_str_have_newline(char *buff);


>>>>>>> 5667e7a10460662e92ee0d2e2215bf3ff4875973

#endif
