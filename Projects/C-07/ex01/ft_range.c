/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:22:06 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/18 19:22:09 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*ptr;
	int		size;
	int		num;
	int		i;

	if ((size = max - min) <= 0)
		return (NULL);
	else
	{
		ptr = malloc(size);
		num = min;
		i = 0;
		while (num < max)
			ptr[i++] = num++;
	}
	return (ptr);
}
