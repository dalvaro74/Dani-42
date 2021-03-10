/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 21:47:22 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/10 17:36:40 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	get_hex(int n)
{
	char	*hex;
	char	char_print;
	int		i;
	int		mod;

	hex = "0123456789abcdef";
	i = 0;
	while (n != 0)
	{
		mod = n % 16;
		char_print = hex[mod];
		write(1, &char_print, 1);
		i++;
		n = n / 16;
	}
}

void	print_hex(unsigned char c)
{
	write(1, "\\", 1);
	if (c < 16)
		write(1, "0", 1);
	get_hex(c);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
		{
			print_hex((unsigned char)*str);
		}
		else
			write(1, str, 1);
		str++;
	}
}
