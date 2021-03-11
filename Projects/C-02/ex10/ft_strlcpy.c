/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 21:46:33 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/11 17:36:13 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	buffer;

	i = 0;
	buffer = 0;
	while (src[buffer] != '\0')
		buffer++;
	while (i < size - 1)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			return (buffer);
		}
		i++;
	}
	dest[i] = '\0';
	return (buffer);
}
