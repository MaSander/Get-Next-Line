/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:02:07 by msander-          #+#    #+#             */
/*   Updated: 2022/06/17 18:53:31 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# define OPEN_MAX 1024

char	*get_next_line(int fd);
char	*ft_get_line(char *str);
char	*ft_read_buff(int fd, char *str, char *aux, char *buff);
char	*ft_get_rest(char *str);
size_t	ft_strlen(const char *c);
char	*ft_strnewline(const char *s);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_calloc(int size);

#endif