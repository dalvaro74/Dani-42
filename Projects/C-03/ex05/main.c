#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

int main (void)
{	
	unsigned int size;
	int longitud;

	size = 5;
	char dest[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src[] = "Creo que esto cabe";
	
	longitud = ft_strlcat(dest, src, size);
	printf("La longitud de lo mio es: %d\n", longitud);
	printf("%s\n", dest);


	char dest3[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src3[] = "Creo que esto cabe";
	longitud = strlcat(dest3, src3, size);
	printf("La longitud funcion real es: %d\n", longitud);
	printf("%s\n", dest3);
	return(0);
}