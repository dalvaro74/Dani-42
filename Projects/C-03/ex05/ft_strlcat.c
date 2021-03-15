/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:57:16 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/15 19:17:03 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	resultado;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != 0)
		++i;
	resultado = 0;
	while (src[resultado] != 0)
		++resultado;
	if (size <= i)
		resultado += size;
	else
		resultado += i;
	j = 0;
	while (src[j] != 0 && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (resultado);
}
