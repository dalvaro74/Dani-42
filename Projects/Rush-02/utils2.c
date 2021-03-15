#include <stdio.h>
#include <stdlib.h>
#include "rush02.h"

/**
 * Recogemos la cadena cortada y la metemos en el array general
 */
void	ft_putin_array(char *src, char *dest)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
}

/**
 * Corta la parte de la cadena que queremos
 */
int ft_cut_numbers(char *ptr, struct s_palabra *palabras, int cont)
{
	int i;
	int sizecut;
	char cadena[50];

	i = 0;
	sizecut = 0;
	while (*(ptr + sizecut) > 47 && *(ptr + sizecut) < 58)
		sizecut++;
	while (i < sizecut)
	{
		*(cadena + i) = *(ptr + i);
		i++;
	}
	*(cadena + i) = '\0';
	palabras[cont].key = malloc(sizecut);
	ft_putin_array(cadena, palabras[cont].key);
	return (sizecut);
}

/**
 * Corta la parte de la cadena que queremos
 */
int ft_cut_words(char *ptr, struct s_palabra *palabras, int cont)
{
	int i;
	int sizecut;
	char cadena[50];

	i = 0;
	sizecut = 0;
	while (*(ptr + sizecut) != '\n' && *(ptr + sizecut) != '\0')
		sizecut++;
	while (i < sizecut)
	{
		*(cadena + i) = *(ptr + i);
		i++;
	}
	*(cadena + i) = '\0';
	palabras[cont].value = malloc(sizecut);
	ft_putin_array(cadena, palabras[cont].value);
	return (sizecut);
}

/**
 * Recorremos la cadena y separamos las keys de las values
 * Insertamos en la cadena de struct los valores de las keys y values
 */
void ft_separate_rows(char *cadini, struct s_palabra *palabras)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	while (*(cadini + i) != '\0')
	{
		if (*(cadini + i) > 47 && *(cadini + i) < 58)
		{
			i += ft_cut_numbers((cadini + i), palabras, cont);
		}
		while (*(cadini + i) == ' ' || *(cadini + i) == ':')
			i++;
		if (*(cadini + i) > 31 && *(cadini + i) < 127)
		{
			i += ft_cut_words((cadini + i), palabras, cont);
			cont++;
		}
		i++;
	}
}
