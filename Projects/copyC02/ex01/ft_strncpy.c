/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 21:02:26 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/09 15:59:58 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n)
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
	return (dest);
}
