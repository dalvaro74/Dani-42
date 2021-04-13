/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:32:08 by exam              #+#    #+#             */
/*   Updated: 2021/03/19 12:32:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void alpha_mirror (char *str)
{
	char c;

	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			if (*str <= 'M')
				c = 'Z' - (*str - 'A');
			else
				c = 'A' + ('Z' - *str);
			write (1, &c, 1);
		}
		else if (*str >= 'a' && *str <= 'z')
		{
			if (*str <= 'm')
				c = 'z' - (*str - 'a');
			else
				c = 'a' + ('z' - *str);
			write (1, &c, 1);
		}
		else
			write (1, str, 1);
		str++;	
	}
}

int		main(int argc, char *argv[])
{		
	if (argc == 2)
		alpha_mirror(argv[1]);
	write (1, "\n", 1);
	return (0);
}