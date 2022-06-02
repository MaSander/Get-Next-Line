/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:03:34 by msander-          #+#    #+#             */
/*   Updated: 2022/06/02 13:59:52 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_isascii(int c)
{
	if (c < 0 || c == 127 || c > 255)
		return (0);
	return (1);
}


size_t	ft_strlen(const char *c)
{
	size_t	lengh;

	lengh = 0;
	if(!c)
		return (0);
	while (*c)
	{
		lengh++;
		c++;
	}
	return (lengh);
}

char	*ft_have_complete_line(char *buff)
{
	while(*buff || *buff == '\n')
		return (buff);
	return (0);	
}

char	*ft_return_line(char *buff)
{
	char	*new_line;
	int		len;
	
	len = 0;
	while(buff[len])
		len++;
	if(buff[len+1] == '\n')
		len++;
	new_line = malloc(len);
	while (len--)
		new_line[len] = buff[len];

	return (new_line);
}
