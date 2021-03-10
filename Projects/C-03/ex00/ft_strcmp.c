/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:56:02 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/10 18:40:08 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		dif;

	dif = 0;
	while (*s1 != '\0')
	{
		dif = *s1 - *s2;
		if (dif)
			return (dif);
		s1++;
		s2++;
	}
	if (*s2 != '\0')
		return (-1 * (*s2));
	else
		return (0);
}
