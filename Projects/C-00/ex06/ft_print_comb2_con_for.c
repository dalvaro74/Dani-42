/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 20:29:18 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/01 20:29:23 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char digit1;
	char digit2;
	char digit3;
    char digit4;

	
	for (digit1 = '0'; digit1 <='9'; digit1++)
	{
		for (digit2 = '0'; digit2 <='9'; digit2++)
		{
			for (digit3 = digit1; digit3 <='9'; digit3++)
			{
                for (digit4 = digit2+1; digit4 <='9'; digit4++)
			    {
                    write(1, &digit1, 1);
                    write(1, &digit2, 1);
					write(1, &espacio, 1);
                    write(1, &digit3, 1);
                    write(1, &digit4, 1);
                    if(digit1 != '9' || digit2 != '8' || digit3 !='9' || digit4 !='9')
                    {
						print_char(',');
                        print_char(' ');
                    }					
			    }			
			}
            
		}
	}
}
