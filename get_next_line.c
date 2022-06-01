/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:06:50 by msander-          #+#    #+#             */
/*   Updated: 2022/06/01 20:06:12 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
# include <unistd.h>
# include "stdio.h"

char *get_next_line(int fd)
{
	ssize_t	size;
	static	int	number_line;
	char	buff[BUFFER_SIZE + 1];

	number_line++;
	size = read(fd, buff, BUFFER_SIZE);

	return (get_new_line_str(buff, number_line));
}
