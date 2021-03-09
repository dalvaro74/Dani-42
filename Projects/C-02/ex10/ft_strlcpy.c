/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 21:46:33 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/09 19:27:30 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;

	i = 0;
	while (i < size)
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
			dest++;
		}
		i++;
	}
	return (i);
}
