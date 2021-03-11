/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:56:55 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/11 20:49:06 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*mi_strstr(char *str, char *to_find)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] != '\0')
			{
				if (str[i + j] != to_find[j])
					break ;
				else
				{
					if (to_find[j + 1] == '\0')
						return (&str[i]);
					j++;
				}
			}
		}
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	else
		return (mi_strstr(str, to_find));
}
