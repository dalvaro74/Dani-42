/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:21:16 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/02/26 14:21:20 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char positivo;
	char negativo;

	positivo = 'P';
	negativo = 'N';
	if (n >= 0)
	{
		write(1, &positivo, 1);
	}
	else
	{
		write(1, &negativo, 1);
	}
}
