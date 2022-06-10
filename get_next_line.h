/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:02:07 by msander-          #+#    #+#             */
/*   Updated: 2022/06/10 00:37:09 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_get_line(char *str);
char    *ft_read_buff(int fd, char *str, char *aux);
char	*ft_get_end_line(char *str);
size_t	ft_strlen(const char *c);
char	*ft_strnewline(const char *s);
char	*ft_strjoin(char *str1, char *str2);

#endif