/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 23:00:14 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/06 23:00:15 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		get_size(char *str)
{
	int		j;

	j = 0;
	while (*(str+j) != '\0')
	{
		j++;
	}
	return (j);
}

void	print_string(char *str)
{
	int		j;
	
	j = 0;
	while (*(str+j) != '\0')
	{
		write (1, (str+j), 1);
		j++;
	}
}	

char	*basic_str(char *str)
{
	str[0] = 'K';
	return (str);	
}
