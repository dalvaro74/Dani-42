#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main (void)
{	
	unsigned int size;
	int longitud;

	size = 5;
	char dest[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src[] = "Creo que esto cabe";
	
	longitud = ft_strlcpy(dest, src, size);
	printf("La longitud de lo mio es: %d\n", longitud);
	printf("%s\n", dest);

	char dest2[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src2[] = "Creo que esto cabe";
	strncpy(dest2, src2, size);
	printf("%s\n", dest2);

	char dest3[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src3[] = "Creo que esto cabe";
	longitud = strlcpy(dest3, src3, size);
	printf("La longitud funcion real es: %d\n", longitud);
	printf("%s\n", dest3);
	return(0);
}