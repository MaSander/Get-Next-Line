/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:54:30 by msander-          #+#    #+#             */
/*   Updated: 2022/06/11 17:57:50 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	static char		*str[OPEN_MAX];
	char			*aux;
	char			*buff;

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE < 1)
		return (NULL);
	aux = NULL;
	buff = ft_calloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	str[fd] = ft_read_buff(fd, str[fd], aux, buff);
	if (!str[fd])
		return (NULL);
	aux = ft_get_line(str[fd]);
	str[fd] = ft_get_rest(str[fd]);
	return (aux);
}
