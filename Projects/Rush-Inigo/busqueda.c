/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   busqueda.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:07:13 by vguttenb          #+#    #+#             */
/*   Updated: 2021/03/14 20:18:21 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

int		coinc(char *buf, char *to_find, unsigned int s)
{
	unsigned int j;

	j = 0;
	while (to_find[j] != 0)
	{
		if (buf[s] != to_find[j])
			return (0);
		s++;
		j++;
	}
	if (buf[s] == ' ' || buf[s] == ':')
		return (1);
	else
		return (0);
}

char	*busqueda(char *buf, char *to_find)
{
	unsigned int	i;

	i = 0;
	if (to_find[0] == 0)
		return (buf);
	while (buf[i] != 0)
	{
		if (buf[i] == to_find[0] && (coinc(buf, to_find, i)))
			return (&buf[i]);
		i++;
	}
	return (0);
}
