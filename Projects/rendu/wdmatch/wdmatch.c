/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:50:27 by exam              #+#    #+#             */
/*   Updated: 2021/03/19 16:50:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_str(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int		ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return size;
}

int	wdmatch(char *a, char *b)
{
	int 	size;
	int 	i;
	int 	j;
	int flag_ko;

	size = ft_strlen (b);
	int flag[size];
	i = 0;
	while (i < size)
	{
		flag[i] = 1;
		i++;
	}
	i = 0;
	j = 0;
	while (a[i] != '\0')
	{
		j = 0;
		flag_ko = 1;
		while (b[j] != '\0')
		{
			if (a[i] == b[j] && flag[j] == 1)
			{
				flag_ko = 0;
				break ;
			}
			flag[j] = 0;
			j++;
		}
		i++;
	}
	if (flag_ko == 1)
		return (0);
	return (1);
}

int		main ( int argc, char *argv[])
{
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		if (wdmatch(argv[1], argv[2]))
			print_str (argv[1]);
		else
			write(1, "\n", 1);
	}
	return (0);
}
