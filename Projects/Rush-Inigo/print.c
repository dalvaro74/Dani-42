/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 19:50:46 by vguttenb          #+#    #+#             */
/*   Updated: 2021/03/14 20:06:43 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

void	print(char *pri)
{
	int i;

	i = 0;
	while (pri[i] != 0)
	{
		write(1, &pri[i], 1);
		i++;
	}
}

void	preprint(unsigned int x, char *buf, int on)
{
	unsigned int i;
	unsigned int *ptr;

	i = 0;
	ptr = &i;
	print(captura(busqueda(buf, revetoi(x))));
	if (on == 1)
		write(1, " ", 1);
	else
		write(1, "\n", 1);
}
