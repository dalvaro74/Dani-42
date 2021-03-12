/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:09:10 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/11 21:14:36 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_negative(int nb)
{
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	return (nb);
}

void	print_num(int nb)
{
	char	numchar[12];
	int		mod;
	int		i;

	i = 0;
	while (nb != 0)
	{
		mod = nb % 10;
		numchar[i] = mod + 48;
		i++;
		nb = nb / 10;
	}
	while (--i >= 0)
	{
		write(1, &numchar[i], 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	nb = check_negative(nb);
	print_num(nb);
}
