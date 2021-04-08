/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:59:04 by exam              #+#    #+#             */
/*   Updated: 2021/03/19 13:59:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return size;
}

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	c;

	size = ft_strlen(str) - 1;
	i = 0;	
	while (size >= i)
	{
		c = str[i];
		str[i] = str[size];
		str[size] = c;
		i++;
		size--; 
	}
	return (str);
}
