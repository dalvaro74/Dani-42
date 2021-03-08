/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:21:19 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/08 18:42:47 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tab_tmp[size];
	int i;
	int j;

	i = size;
	j = 0;
	while (--i >= 0)
	{
		tab_tmp[j] = *(tab + i);
		j++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tab_tmp[i];
		i++;
	}
}
