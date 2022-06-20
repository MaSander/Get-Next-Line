/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:06:50 by msander-          #+#    #+#             */
/*   Updated: 2022/06/17 18:34:45 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_line(char *str)
{
	char	*new_line;
	int		len;

	if (!*str)
		return (NULL);
	len = 0;
	while (str[len] != '\0' && str[len] != '\n')
		len++;
	new_line = ft_calloc(len + 2);
	if (str[len] == '\n')
		new_line[len] = '\n';
	while (len--)
		new_line[len] = str[len];
	return (new_line);
}

char	*ft_read_buff(int fd, char *str, char *aux, char *buff)
{
	int		read_size;

	read_size = 1;
	while (read_size > 0)
	{
		read_size = read(fd, buff, BUFFER_SIZE);
		if (read_size == -1)
		{
			free(buff);
			return (NULL);
		}
		if (read_size == 0)
			break ;
		buff[read_size] = '\0';
		aux = str;
		if (aux == NULL)
			aux = ft_calloc(1);
		str = ft_strjoin(aux, buff);
		free(aux);
		if (ft_strnewline(str))
			break ;
	}
	free(buff);
	return (str);
}

char	*ft_get_rest(char *str)
{
	int		i;
	char	*remnant;

	if (!str)
		return (NULL);
	if (!ft_strnewline(str))
	{
		free(str);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i] == '\n')
		i++;
	remnant = ft_strjoin("", str + i);
	free(str);
	return (remnant);
}

char	*get_next_line(int fd)
{
	static char		*str;
	char			*aux;
	char			*buff;

	if (fd < 0)
		return (NULL);
	aux = NULL;
	buff = ft_calloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	str = ft_read_buff(fd, str, aux, buff);
	if (!str || !*str)
		return (NULL);
	aux = ft_get_line(str);
	str = ft_get_rest(str);
	if (!aux)
	{
		free(str);
		free(aux);
		return (NULL);
	}
	return (aux);
}
