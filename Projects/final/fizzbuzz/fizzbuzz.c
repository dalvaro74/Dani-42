/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:51:21 by exam              #+#    #+#             */
/*   Updated: 2021/03/19 10:51:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_num (int num)
{
	int		mod;
	int		i;
	char	c;

	char arr[3] ={'k', 'k', 'k'};
	i = 0;
	while (num != 0)
	{
		mod = num % 10;
		c = '0' + mod;
		arr[i] = c;
		num = num / 10;
		i++;
	}
	i = 3 - 1;
	while (i >= 0)
	{
		if (arr[i] != 'k')
			write(1, &arr[i], 1);
		i--;
	}
	write(1, "\n", 1);
}

void put_str(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int		main(void)
{
	int		num;

	num = 1;	
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			put_str("fizzbuzz");
		else if (num % 3 == 0)
			put_str("fizz");
		else if (num % 5 == 0)
			put_str("buzz");
		else
			print_num(num);
		num++;
	}	
}
