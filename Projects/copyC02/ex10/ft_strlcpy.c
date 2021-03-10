/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 21:46:33 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/09 21:00:59 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;

	i = 0;
	while (i < size - 1)
	{
		if (*(src) != '\0')
		{
			*dest = *src;
			src++;
			dest++;
		}
		else
		{
			*(dest) = '\0';
			return (i);
		}
		i++;
	}
	*(dest) = '\0';
	i++;
	src++;
	while (*(src++) != '\0')
		i++;
	return (i);
}
