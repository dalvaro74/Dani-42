/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:27:15 by exam              #+#    #+#             */
/*   Updated: 2021/03/19 14:27:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(const char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return size;
}

int get_multi(int pot)
{
	int		i;
	int 	num;

	if (pot == 0)
		return (1);
	num = 1;
	i = 1;
	while (i <= pot)
	{
		num = 10 * num;
		i++;
	}		
	return (num);
}

int check_neg(const char *str)
{
	int cont_neg;

	cont_neg = 0;
	while ((*str < '0' || *str > '9') && *str != '\0')
	{
		if (*str == '-')
		{
			if ((*(str+1) < '0' || *(str+1) > '9'))
				return (0);
			else
				return (-1);
		}
		str++;
	}
	return (1);
}

int		ft_atoi(const char *str)
{
	int 	size;
	int		flag_neg;
	const char *ptr;
	int 	num;

	flag_neg = check_neg(str);
	size = 0;
	while ((*str < '0' || *str > '9') && *str != '\0')
	{
		if (*str != ' ' && *str != '\f' && *str != '\n'&& *str != '\r'&& *str != '\t'
			&& *str != '\v'&& *str != '-')
			return (0);		
		str++;
	}
	if (*str == '\0')
		return (0);		
	else
	{
		ptr = str;
		while (*str >= '0' && *str++ <= '9')
			size++;
		num = 0;
		while (size > 0)
		{
			num = num + (*ptr++ - 48) * get_multi(size-1);
			size--;
		}
	}
	return (num * flag_neg); 
}
