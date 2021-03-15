#include "rush02.h"
#include <stdio.h>

/**
 * Compara dos cadenas para ver si son iguales
*/

int		ft_strcmp(char *s1, char *s2)
{
	int r;
	int i;

	i = 0;
	r = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			return (r);
		}
		i++;
	}
	return (r);
}

/**
 * Buscamos el caracter pasado por parametro en la cadena
 * pasada. Devuelve una cadena
 */
int	ft_get_number(char *number, struct s_palabra *palabras)
{
	int i;
	int encontrado;

	i = 0;
	encontrado = 0;
	while (i < 41 && encontrado == 0)
	{
		if (ft_strcmp(number, palabras[i].key) == 0)
		{
			encontrado = 1;
		}
		i++;
	}
	return (i - 1);
}
