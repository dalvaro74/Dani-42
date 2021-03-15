#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * Esta funcion recorre la cadena de argumentos y
 * comprueba que solo tiene caracteres numericos
 * Ademas devuelve el tamano de la cadena o
 * si tiene otros carateres no numericos un -1
 */
int		ft_size(char *ptr)
{
	int i;
	int valido;

	i = 0;
	valido = 1;
	while (*(ptr + i) != '\0' && valido == 1)
	{
		if (*(ptr + i) < 47 || *(ptr + i) > 58)
			valido = 0;
		i++;
	}
	return (valido == 1 ? i : -1);
}

/**
 * Comprobamos si el numero introducido cumple las condiciones
 * Falta: el valor puede tener longitud 11, faltaria una validacion
 */
int		ft_check_args(char *str)
{
	int size;
	int valido;

	valido = -1;
	size = ft_size(str);
	if (size != -1 && size < 10)
	{
		valido = 1;
	}
	return (valido);
}

/**
 * Leemos el diccionario y retornamos la cadena leida
 * Devuelve el numero de carcteres leidos
 */
int		ft_read_diccionary(char *filename, char *cadena)
{
	int f;
	int leidos;

	f = open(filename, O_RDONLY);
	leidos = 0;
	if (f > 0)
	{
		leidos = read(f, cadena, 690);
		if (leidos > 0)
		{
			cadena[690] = '\0';
		}
	}
	return (leidos);
}
