/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 20:29:18 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/03 17:36:08 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char d1, char d2, char d3, char d4)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, " ", 1);
	write(1, &d3, 1);
	write(1, &d4, 1);
	if (d1 != '9' || d2 != '8' || d3 != '9' || d4 != '9')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	internal_while(char d1, char d2)
{
	char d3;
	char d4;

	d3 = d1 - 1;
	while (++d3 <= '9')
	{
		if (d3 == d1)
			d4 = d2;
		else
			d4 = '0' - 1;
		while (++d4 <= '9')
		{
			print_num(d1, d2, d3, d4);
		}
	}
}

void	ft_print_comb2(void)
{
	char d1;
	char d2;

	d1 = '0' - 1;
	while (++d1 <= '9')
	{
		d2 = '0' - 1;
		while (++d2 <= '9')
		{
			internal_while(d1, d2);
		}
	}
}
