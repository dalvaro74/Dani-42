/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:03:33 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/18 18:31:05 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*ptr;

	size = ft_strlen(src);
	ptr = malloc(size);
	if (ptr != NULL)
	{
		ptr = src;
	}
	return (ptr);
}
