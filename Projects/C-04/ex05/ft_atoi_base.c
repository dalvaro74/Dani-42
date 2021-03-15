/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:13:23 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/15 21:47:37 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		check_error(char *base)
{
	int i;
	int j;

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	while (i < ft_strlen(base))
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-'
				|| base[j] == '+' || base[j] == '-')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		pos_base(char c, char *base)
{
	int position;

	position = 0;
	while (base[position] != 0)
	{
		if (c == base[position])
			return (position);
		position++;
	}
	return (0);
}

int		get_pot(int base, int pot)
{
	int result;

	if (pot == 0)
		return (1);

	result = base;
	result = result * get_pot(base, pot - 1);
	return (result);
}

int		ft_atoi_base(char *str, char *base)
{
	int num;
	int pos_b;
	int i;
	int j;
	int potencia;

	if (!check_error(base))
	{
		i = 0;
		num = 0;
		j = ft_strlen(str) - 1;
		while (i < ft_strlen(str))
		{
			pos_b = pos_base(str[i], base);
			potencia = get_pot(ft_strlen(base), j - i);
			num = num + pos_b * potencia;
			i++;
		}
		return (num);
	}
	return (0);
}
