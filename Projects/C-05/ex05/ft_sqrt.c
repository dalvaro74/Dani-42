/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:41:09 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/16 21:39:11 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int stop;
	int sqrt;

	sqrt = 0;
	stop = 46340;
	if (nb <= 0)
		return (0);
	while (sqrt < nb && sqrt < stop)
	{
		sqrt++;
		if (sqrt * sqrt == nb)
			return (sqrt);
	}
	return (0);
}
