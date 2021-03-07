/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:51:25 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/03 17:27:53 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char digit1;
	char digit2;
	char digit3;

	digit1 = '0' - 1;
	while (++digit1 <= '7')
	{
		digit2 = digit1;
		while (++digit2 <= '8')
		{
			digit3 = digit2;
			while (++digit3 <= '9')
			{
				write(1, &digit1, 1);
				write(1, &digit2, 1);
				write(1, &digit3, 1);
				if (digit1 != '7' || digit2 != '8' || digit3 != '9')
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
			}
		}
	}
}
