/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long_long.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:06:22 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/12 15:55:02 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	atoi tolerates some characters: tabs, return carrage, espaces, etc
	These especial characters are: '\t', '\n', '\f', '\r' and space (' ')
	Or in decimal notation: 9,10,11,12,13 and 32
*/

#include "libft.h"

int	check_sig(int sig)
{
	if (sig > 0)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *s)
{	
	unsigned long long	num;
	int					sig;

	num = 0;
	sig = 1;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sig = sig * -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		num = (10 * num) + (*s - '0');
		s++;
		if ((num) > 9223372036854775807)
			return (check_sig(sig));
	}
	return (num * sig);
}
