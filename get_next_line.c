/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:06:50 by msander-          #+#    #+#             */
/*   Updated: 2022/06/08 13:29:26 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_concat_buff(char *buff, char *str, int strlen)
{
	int		str_i;
	int		buff_i;
	char	*concat;

	str_i = 0;
	buff_i = 0;
	concat = malloc(strlen + BUFFER_SIZE);
	while (str[str_i])
	{
		concat[str_i] = str[str_i];
		str_i++;
	}
	while ((strlen > str_i) || buff[buff_i])
	{
		concat[str_i] = buff[buff_i];
		str_i++;
		buff_i++;
	}
	return (concat);
}

char	*get_next_line(int fd)
{
	ssize_t			size;
	ssize_t			size_read;
	char			*buff;
	static char		*str;
	char			*next_line;

	next_line = 0;
	size = 0;
	size_read = BUFFER_SIZE;
	while (!ft_str_have_newline(str) && size_read == BUFFER_SIZE)
	{
		buff = malloc(BUFFER_SIZE);
		size_read = read(fd, buff, BUFFER_SIZE);
		size += size_read;
		if (str)
			str = ft_concat_buff(buff, str, size);
		else
			str = ft_strdup(buff, size);
		free(buff);
	}
	next_line = ft_return_line(str);
	str = ft_get_end_line(str);
	return (next_line);
}
