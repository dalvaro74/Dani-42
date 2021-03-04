/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:00:15 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/03 19:47:44 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char a[9];
char b[9];
int n;

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_array()
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < n)
	{
		print_char(a[i]);
		i++;
	}
	while (j < n)
	{
		if (a[j] != b[j])
		{
			print_char(',');
			print_char(' ');
			break ;
		}
		j++;
	}
}

int		get_position()
{
	int pos;

	pos = n;
	while (--pos >= 0)
	{
		if (a[pos] != b[pos])
		{
			return (pos);
		}
	}
	return (100);
}

void	print_all_num()
{
	int pos;
	int i;

	pos = 0;
	while (pos != 100)
	{
		pos = get_position(n);
		if (pos == 100)
			break ;
		else
		{
			a[pos] = a[pos] + 1;
			i = pos + 1;
			while (i < n)
			{
				a[i] = a[i - 1] + 1;
				i++;
			}
		}
		print_array();
	}
}

void	ft_print_combn(int num_size)
{
	int		i;

	n = num_size;
	a[0] = '0';
	b[0] = '9' - n + 1;
	i = 0;
	while (i < n)
	{
		a[i + 1] = a[i] + 1;
		b[i + 1] = b[i] + 1;
		i++;
	}
	print_array();
	print_all_num();
}
