/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:54:36 by msander-          #+#    #+#             */
/*   Updated: 2022/06/11 18:04:03 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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