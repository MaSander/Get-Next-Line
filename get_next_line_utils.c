/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:03:34 by msander-          #+#    #+#             */
/*   Updated: 2022/06/01 12:07:32 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

size_t	get_lines_count(char *buff)
{
	size_t	len;

	len = 1;
	while(*buff)
	{
		if(*buff == '\n')
			len++;
		buff++;
	}

	return (len);
}

char	*str_new_line(char *buff)
{
	size_t	line_len;
	char	*str;

	line_len = 1;
	while(*buff != '\n')
	{
		line_len++;
		buff++;
	}

	str = malloc(line_len);
	while (line_len-- > 0)
		str[line_len] = *buff--;

	return (str);
}

int	ft_isascii(int c)
{
	if (c < 0 || c == 127 || c > 255)
		return (0);
	return (1);
}

char	*get_new_line_str(char *buff, size_t number_line)
{
	char	**pointer_line;
	char	*newstr;
	size_t	line_number;

	pointer_line = malloc(get_lines_count(buff));
	pointer_line[0] = buff;
	line_number = 1;
	while(ft_isascii(*buff) && (line_number < number_line))
	{
		if(*buff == '\n')
		{
			pointer_line[line_number++] = (buff);
		}
		buff++;
	}

	return (str_new_line(pointer_line[number_line]));
}
