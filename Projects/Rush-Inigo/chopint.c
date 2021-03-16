/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chopint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:23:50 by vguttenb          #+#    #+#             */
/*   Updated: 2021/03/14 21:17:41 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

void	three(unsigned int a, char *buf, int on)
{
	if (a > 99)
	{
		preprint((a / 100), buf, 1);
		preprint(100, buf, 1);
	}
	if ((a % 100) > 19)
	{
		preprint(((a % 100) / 10) * 10, buf, 1);
		if ((a % 10) > 0)
		{
			if (on == 1)
				preprint(a % 10, buf, 1);
			else
				preprint(a % 10, buf, 0);
		}
	}
	else if ((a % 100) > 9)
		preprint(a % 100, buf, on);
	else if ((a % 10) > 0)
		preprint(a % 10, buf, on);
}

void	chop(unsigned int a, char *buf)
{
	if (a == 0)
		preprint(0, buf, 0);
	if (a > 999999999)
	{
		three((a / 1000000000), buf, 1);
		preprint(1000000000, buf, 1);
	}
	if (a > 999999)
	{
		three(((a % 1000000000) / 1000000), buf, 1);
		if (((a % 1000000000) / 1000000) > 0)
			preprint(1000000, buf, 1);
	}
	if (a > 999)
	{
		three(((a % 1000000) / 1000), buf, 1);
		if (((a % 1000000) / 1000) > 0)
			preprint(1000, buf, 1);
	}
	three((a % 1000), buf, 0);
}
