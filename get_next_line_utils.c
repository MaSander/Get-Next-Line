/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:03:34 by msander-          #+#    #+#             */
/*   Updated: 2022/06/10 01:15:58 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	size_t	lengh;

	lengh = 0;
	while (*c)
	{
		lengh++;
		c++;
	}
	return (lengh);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*result;
	int		len;

	len = ft_strlen(str1) + ft_strlen(str2);
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	while (*str1 != '\0')
	{
		*result = *str1;
		result++;
		str1++;
	}
	while (*str2 != '\0')
	{
		*result = *str2;
		result++;
		str2++;
	}
	*result = '\0';
	return (result - len);
}


char	*ft_strnewline(const char *s)
{
	while (*s != '\0')
	{
		if (*s == '\n')
			return ((char *)s);
		++s;
	}
	return (NULL);
}