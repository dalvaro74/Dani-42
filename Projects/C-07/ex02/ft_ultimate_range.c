/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:23:36 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/18 20:56:53 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*ptr;
	int		size;
	int		num;
	int		i;

	if ((size = max - min) <= 0)
	{
		range = NULL;
		return (0);
	}
	else
	{
		if ((ptr = malloc(size)))
		{
			num = min;
			i = 0;
			while (num < max)
				ptr[i++] = num++;
		}
		else
			return (-1);
	}
	*range = ptr;
	return (size);
}
