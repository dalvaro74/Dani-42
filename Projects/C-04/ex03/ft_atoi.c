/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:13:43 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/12 14:17:19 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_neg(int num, int neg)
{
	if (neg % 2)
		return (-1 * num);
	return (num);
}

int		ft_atoi(char *str)
{
	int cont_neg;
	int num;

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
