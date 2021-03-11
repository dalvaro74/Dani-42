/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 21:47:22 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/11 19:04:37 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_hex(int n)
{
	char	*hex;
	char	char_print[2];
	char	tmp;
	int		i;
	int		mod;

	hex = "0123456789abcdef";
	i = 0;
	while (n != 0)
	{
		mod = n % 16;
		char_print[i] = hex[mod];
		i++;
		n = n / 16;
	}
	while (--i >= 0)
	{
		tmp = char_print[i];
		write(1, &tmp, 1);
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
