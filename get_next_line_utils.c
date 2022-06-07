/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:03:34 by msander-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/06/06 20:40:16 by coder            ###   ########.fr       */
=======
/*   Updated: 2022/06/06 00:08:30 by coder            ###   ########.fr       */
>>>>>>> 5667e7a10460662e92ee0d2e2215bf3ff4875973
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

char	*ft_get_end_line(char *buff)
{
	int	i;

	i = 0;
	while(buff[i])
	{
<<<<<<< HEAD
=======
		//retornar se passou por \n ou \0
>>>>>>> 5667e7a10460662e92ee0d2e2215bf3ff4875973
		if(buff[i] == '\n')
			return (buff + i + 1);	
		i++;
	}
	return (0);	
}

char	*ft_return_line(char *str)
{
	char	*new_line;
	int		len;
	
	len = 0;
<<<<<<< HEAD
	while(str[len] && str[len - 1] != '\n')
=======
	while(buff[len] && buff[len - 1] != '\n')
>>>>>>> 5667e7a10460662e92ee0d2e2215bf3ff4875973
			len++;
	new_line = malloc(len);
	while (len--)
		new_line[len] = str[len];

	return (new_line);
}

char    *ft_strdup(char *str, int size)
{
	char	*newstr;
	newstr = malloc(size);

	while (--size >= 0)
		newstr[size] = str[size];

	return (newstr);
}

int	ft_str_have_newline(char *str)
{
	if(!str)
		return (0);
	while(*str)
	{
<<<<<<< HEAD
		if(*str == '\n' || *str == '\0')
=======
		if(*str == '\n')
>>>>>>> 5667e7a10460662e92ee0d2e2215bf3ff4875973
			return(1);
		str++;
	}
	return (0);
<<<<<<< HEAD
}
=======
}
>>>>>>> 5667e7a10460662e92ee0d2e2215bf3ff4875973
