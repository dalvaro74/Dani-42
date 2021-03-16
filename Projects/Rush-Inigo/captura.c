/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   captura.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:25:16 by vguttenb          #+#    #+#             */
/*   Updated: 2021/03/16 15:56:44 by ialvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

char	*captura(char *right)
{
	unsigned int	h;
	unsigned int	y;
	char			*sol;

	h = 0;
	y = 0;
	sol = malloc(12);
	while (right[h] != ':')
		h++;
	h++;
	while (right[h] < 33)
		h++;
	while (right[h] != '\n')
	{
		sol[y] = right[h];
		y++;
		h++;
	}
	sol[y] = 0;
	free(sol);
	return (sol);
}
