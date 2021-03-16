/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aver.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:40:39 by ialvarez          #+#    #+#             */
/*   Updated: 2021/03/14 21:14:59 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

char	*aver(char *dictname)
{
	int			fd;
	char		*buf;
	ssize_t		nr_bytes;

	buf = malloc(sizeof(char) * 600);
	fd = open(dictname, O_RDONLY);
	if (fd == -1)
		write(1, "Dict error\n", 11);
	else
	{
		nr_bytes = read(fd, buf, sizeof(char) * 600);
		close(fd);
		free(buf);
		if (nr_bytes == 0)
		{
			write(1, "Dict error\n", 11);
			return (0);
		}
		else
			return (buf);
	}
	return (0);
}
