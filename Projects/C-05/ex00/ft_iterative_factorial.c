/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:24:34 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/16 15:12:29 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int num;

	num = nb;
	if (nb < 1)
		return (1);
	while (nb > 1)
	{
		num = num * (nb - 1);
		nb--;
	}
	return (num);
}
