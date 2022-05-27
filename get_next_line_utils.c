/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:03:34 by msander-          #+#    #+#             */
/*   Updated: 2022/05/18 00:19:37 by msander-         ###   ########.fr       */
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

	line_len = 0;
	while(*buff != '\n' || *buff)
	{
		line_len++;
		buff++;
	}

	str = malloc(line_len + 1);
	while (line_len--)
		str[line_len] = *buff--;

	return (str);
}

char	*get_new_line_str(char *buff, size_t number_line)
{
	char	**pointer_line;
	size_t	line_number;

	pointer_line = malloc(get_lines_count(buff));
	while((*buff != 0) || (line_number < number_line))
	{
		if(*buff == '\n')
		{
			pointer_line[line_number] = (buff);
			line_number++;
		}
		buff++;
	}

	return (str_new_line(*pointer_line));
}
