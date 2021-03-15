/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:13:23 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/15 18:22:02 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_neg(int num, int neg)
{
	if (neg % 2)
		return (-1 * num);
	return (num);
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

int		ft_atoi_base(char *str, char *base)
{
	int cont_neg;
	int num;
	int size;

	cont_neg = 0;
	num = 0;
	while (*str != '\0')
	{
		if (*str == '-')
			cont_neg++;
		if (*str >= '0' && *str <= '9')
		{
			num = num * 10 + (int)(*str - 48);
			if (*(str + 1) < '0' || *(str + 1) > '9')
				return (check_neg(num, cont_neg));
		}
		str++;
	}
	return (0);
}
