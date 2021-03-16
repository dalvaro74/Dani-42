/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:03:22 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/16 15:23:32 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	if (power == 0)
		return (1);
	result = nb;
	i = power;
	while (i > 1)
	{
		result = result * nb;
		i--;
	}
	return (result);
}
