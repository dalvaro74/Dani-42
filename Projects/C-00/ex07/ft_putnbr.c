/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:20:41 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/03 18:58:15 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

int		check_negative(int nb)
{
	if (nb < 0)
	{
		nb = nb * (-1);
		print_char('-');
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	numchar[12];
	int		mod;
	int		contador;
	int		i;
	int		int2char;

	int2char = 48;
	contador = 0;
	nb = check_negative(nb);
	while (nb != 0)
	{
		mod = nb % 10;
		numchar[contador] = mod + int2char;
		contador++;
		nb = nb / 10;
	}
	i = contador;
	while (--i >= 0)
	{
		write(1, &numchar[i], 1);
	}
}
