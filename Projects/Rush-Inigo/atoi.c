/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 21:16:38 by vguttenb          #+#    #+#             */
/*   Updated: 2021/03/14 20:25:06 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

int		atua(unsigned int *arrow, char *str)
{
	int		i;
	int		c;

	i = 0;
	c = 1;
	if (str[0] < '0' || str[0] > '9')
		return (-1);
	else
	{
		while (str[i] != 0)
			i++;
		i--;
		if (i == 0 && str[i] == '0')
			return (0);
		while (i >= 0)
		{
			if ((arrow[0] + ((str[i] - 48) * c)) > 4294967295)
				return (-1);
			else
				arrow[0] = arrow[0] + ((str[i] - 48) * c);
			c = c * 10;
			i--;
		}
		return (1);
	}
}
