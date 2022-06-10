/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:06:50 by msander-          #+#    #+#             */
/*   Updated: 2022/06/10 01:17:12 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

///
/// get a line
///
char	*ft_get_line(char *str)
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
	new_line[len] = '\0';
	while (len--)
		new_line[len] = str[len];
	return (new_line);
}

///
///read buff and concat with static str
///
char	*ft_read_buff(int fd, char *str, char *aux)
{
	int		read_size;
	char	*buff;

	buff = (char *)malloc(BUFFER_SIZE + 1);
	read_size = 1;
	while (read_size > 0)
	{
		read_size = read(fd, buff, BUFFER_SIZE);
		buff[read_size] = '\0';
		aux = str;
		str = ft_strjoin(aux, buff);
		free(aux);

		// if (aux == NULL)
		// {
		// 	if (ft_aux_alloc(&aux))
		// 		return (NULL);
		// }

		if (ft_strnewline(str))
			break;
	}
	free(buff);
	return (str);
}

///
/// set at Line
///
char	*ft_get_end_line(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\n' && str[i])
		i++;
	return (str + i + 1);
}

char	*get_next_line(int fd)
{
	static char		*str;
	char			*aux;

	if(fd < 0)
		return (NULL);
	if(!str)
	{
		str = (char *)malloc(1);
		str[0] = '\0';
	}

	aux = NULL;
	if(!ft_strnewline(str))
		str = ft_read_buff(fd, str, aux);
	aux = ft_get_line(str);
	str = ft_get_end_line(str);
	return (aux);
}
