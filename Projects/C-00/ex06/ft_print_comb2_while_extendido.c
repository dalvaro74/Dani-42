/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 20:29:18 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/01 21:29:16 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char d1;
	char d2;
	char d3;
	char d4;

	d1 = '0';
	while (d1 <= '9')
	{
		d2 = '0';
		while (d2 <= '9')
		{
			d3 = d1;
			while (d3 <= '9')
			{
				if (d3 == d1)
					d4 = d2 + 1;
				else
					d4 = '0';
				while (d4 <= '9')
				{
					write(1, &d1, 1);
					write(1, &d2, 1);
					print_char(' ');
					write(1, &d3, 1);
					write(1, &d4, 1);
					if (d1 != '9' || d2 != '8' || d3 != '9' || d4 != '9')
					{
						print_char(',');
						print_char(' ');
					}
					d4++;
				}
				d3++;
			}
			d2++;
		}
		d1++;
	}
}
