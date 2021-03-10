/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:56:02 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/10 19:48:18 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if ((unsigned char)*s1 > (unsigned char)*s2)
			return (1);
		else if ((unsigned char)*s1 < (unsigned char)*s2)
			return (-1);
		s1++;
		s2++;
	}
	if (*s2 != '\0')
		return (-1);
	else
		return (0);
}
