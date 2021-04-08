/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:15:00 by exam              #+#    #+#             */
/*   Updated: 2021/03/19 12:15:03 by exam             ###   ########.fr       */
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
}

int		main(int argc, char *argv[])
{
	if (argc <= 1)
		write(1, "\n", 1);
	else
	{
		print_str(argv[argc-1]);
		write(1, "\n", 1);
	}
	return (0);
}	
