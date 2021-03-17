/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:52:22 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/17 21:46:47 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char **map;

int rows_size( char *file)
{
	int f;
	int numbytes;
	int i;
	char c;
	
	char column_char[10];
	
	f = open(file, O_RDONLY);
	i = 0;
	while ((numbytes = read(f, &c, 1) > 0) && c != '.')
	{
		column_char[i] = c;
		i++;
	}
	close(f);
	return (ft_atoi(column_char));
}

int	columns_size (char *file)
{
	int f;
	char c;
	int cont_salto;
	int columns;
	int rows;
	int numbytes;

	cont_salto = 0;
	columns = 0;
	rows = 0;
	
	f = open(file, O_RDONLY);
	while ((numbytes = read(f, &c, 1) > 0) && c != '\0')
	{
		if (c == '\n')
			cont_salto++;
		if (cont_salto == 1 && c != '\n')
				columns++;
	}
	close(f);	
	return(columns);
}

void fill_map(int rows, int columns, char *file)
{
	int f;
	int i;
	int j;
	char c;
	int numbytes;
	int cont_salto;
	
	f = open(file, O_RDONLY);
	i = 0;
	j = 0;
	cont_salto = 0;
	map[0][0] = 'a';
	while ((numbytes = read(f, &c, 1) > 0))
	{
		if (cont_salto > 0 && cont_salto <=rows)
		{
			if (c != '\n')
			{
				printf("%d - %d - %c  ", i, j, c);
				map[i][j] = c;
				j++;	
			}
			else
			{
				i++;
				j = 0;	
			}				
		}
		if (c == '\n')
			cont_salto++;
	}
	close(f);
}

int		main (void)
{	
	char filename[] = "mapa";
	int rows;
	int columns;
	int i;
	
	rows = rows_size(filename);
	columns = columns_size(filename);

	map = (char **)malloc(rows);
	i = 0;
	while (i < rows)
	{
		map[i] = (char *)malloc(columns);
		i++;
	}

	fill_map(rows, columns, filename);
	//printf("%c\n", map[0][0]);
	printf("El tamaño de las rows es: %d\n", rows);
	printf("El tamaño de las columnas es: %d\n", columns);
	free(map);
	return (0);
}
