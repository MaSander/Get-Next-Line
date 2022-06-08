/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:03:34 by msander-          #+#    #+#             */
/*   Updated: 2022/06/08 13:33:08 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	size_t	lengh;

	lengh = 0;
	if (!c)
		return (0);
	while (*c)
	{
		lengh++;
		c++;
	}
	return (lengh);
}

char	*ft_get_end_line(char *buff)
{
	int	i;

	i = 0;
	while (buff[i])
	{
		if (buff[i] == '\n')
			return (buff + i + 1);
		i++;
	}
	return (0);
}

char	*ft_return_line(char *str)
{
	char	*new_line;
	int		len;

	len = 1;
	while (*str == '\n')
		str++;
	while (str[len] && str[len] != '\n')
		len++;
	len++;
	new_line = malloc(len);
	while (len--)
		new_line[len] = str[len];
	return (new_line);
}

char	*ft_strdup(char *str, int size)
{
	char	*newstr;

	newstr = malloc(size);
	while (--size >= 0)
		newstr[size] = str[size];
	return (newstr);
}

int	ft_str_have_newline(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '\n' || *str == '\0')
			return (1);
		str++;
	}
	return (0);
}
