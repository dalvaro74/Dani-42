/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revetoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:43:08 by vguttenb          #+#    #+#             */
/*   Updated: 2021/03/14 19:59:19 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

char	*revetoi(unsigned int a)
{
	unsigned int	c;
	unsigned int	p;
	char			*numstr;

	c = 1;
	p = 0;
	numstr = malloc(12);
	while (a / c >= 10)
		c = c * 10;
	while (c > 1)
	{
		if (a > (c - 1))
		{
			numstr[p] = ((a % (c * 10)) / c) + '0';
			p++;
		}
		c = c / 10;
	}
	numstr[p] = (a % 10) + '0';
	p++;
	numstr[p] = 0;
	free(numstr);
	return (numstr);
}
