/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:12:14 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/11 21:14:09 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
int	check_negative(int nb)
{
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	return (nb);
}
int	check_error(char *base)
{
	int i;
	int j;

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	while (i< ft_strlen(base))
	{
		j = i+1;
		while (j< ft_strlen(base))
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
void	print_num(int nb, char* base)
{
	char	numchar[12];
	int		mod;
	int		i;
	int 	size;

	size = ft_strlen(base);
	i = 0;
	while (nb != 0)
	{
		mod = nb % size;
		numchar[i] = base[mod];
		i++;
		nb = nb / size;
	}
	while (--i >= 0)
	{
		write(1, &numchar[i], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!check_error (base))
	{
		nbr = check_negative(nbr);
		print_num(nbr, base);
	}	
}
