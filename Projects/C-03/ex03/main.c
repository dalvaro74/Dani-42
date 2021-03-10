#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main (void)
{	
	unsigned int size;
	int longitud;

	size = 5;
	char dest[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src[] = "Creo que esto cabe";
	
	longitud = ft_strncat(dest, src, size);
	printf("La longitud de lo mio es: %d\n", longitud);
	printf("%s\n", dest);


	char dest3[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src3[] = "Creo que esto cabe";
	longitud = strncat(dest3, src3, size);
	printf("La longitud funcion real es: %d\n", longitud);
	printf("%s\n", dest3);
	return(0);
}