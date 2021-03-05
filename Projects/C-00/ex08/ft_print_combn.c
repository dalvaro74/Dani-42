/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:00:15 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/05 15:12:28 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char g_a[9];
char g_b[9];
int g_n;

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_array(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < g_n)
	{
		print_char(g_a[i]);
		i++;
	}
	while (j < g_n)
	{
		if (g_a[j] != g_b[j])
		{
			print_char(',');
			print_char(' ');
			break ;
		}
		j++;
	}
}

int		get_position(void)
{
	int pos;

	pos = g_n;
	while (--pos >= 0)
	{
		if (g_a[pos] != g_b[pos])
		{
			return (pos);
		}
	}
	return (100);
}

void	print_all_num(void)
{
	int pos;
	int i;

	pos = 0;
	while (pos != 100)
	{
		pos = get_position();
		if (pos == 100)
			break ;
		else
		{
			g_a[pos] = g_a[pos] + 1;
			i = pos + 1;
			while (i < g_n)
			{
				g_a[i] = g_a[i - 1] + 1;
				i++;
			}
		}
		print_array();
	}
}

void	ft_print_combn(int num_size)
{
	int		i;

	g_n = num_size;
	g_a[0] = '0';
	g_b[0] = '9' - g_n + 1;
	i = 0;
	while (i < g_n)
	{
		g_a[i + 1] = g_a[i] + 1;
		g_b[i + 1] = g_b[i] + 1;
		i++;
	}
	print_array();
	print_all_num();
}
