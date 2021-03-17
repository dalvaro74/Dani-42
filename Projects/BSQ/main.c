/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:52:22 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/17 17:53:04 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int		main (void)
{
	int f;
	char c;
	int cont_salto;
	int cont_columns;
	int numbytes;
	
	cont_salto = 0;
	cont_columns = 0;
	
	f = open("mapa.txt", O_RDONLY);
	while ((numbytes = read(f, &c, 1) > 0) && c != '\0 ')
	{
		if (c == '\n' && )
		{
			if(c == '\n')
			{
				cont_salto++;
				continue;
			}					
		}
		else
			cont_salto++;
		
		
		//write(1, &c, numbytes);
		cont++;	
	}
	close(f);
	printf("El tamaño de la fila es: %d\n", cont);
	return (0);	
}
