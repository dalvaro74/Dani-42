/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:52:22 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/18 16:41:33 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char **g_map;

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
	char *ptr;
	
	f = open(file, O_RDONLY);
	j = 0;
	i = 0;
	c = 0;
	while ( c != '\n')
		read(f, &c, 1);
	while (i < rows)
	{
		j = 0;
		ptr = (char *)malloc(columns);
		while (j < columns)
		{
			read(f, &c, 1);
			if (c != '\n')
				*(ptr + j++) = c;
		}
		g_map[i++] = ptr;
	}
	free(ptr);
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

	g_map = (char **)malloc(rows);
	i = 0;
	while (i < rows)
	{
		g_map[i] = (char *)malloc(columns);
		i++;
	}

	fill_map(rows, columns, filename);
		
	printf("\nEl tamaño de las rows es: %d\n", rows);
	printf("El tamaño de las columnas es: %d\n", columns);
	printf("%s\n", g_map[14]);
	printf("%c\n", g_map[14][11]);
	i = 0;
	/*
	while(i < rows)
	{
		free(g_map[i]);
		i++;
	}		
	free(g_map);
	*/
	return (0);
}
