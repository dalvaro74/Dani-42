#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{	
	unsigned int size;
	int longitud;

	size = 5;
	char dest[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src[] = "Creo que esto cabe";
	
	longitud = ft_strncmp(dest, src, size);
	printf("La longitud de lo mio es: %d\n", longitud);
	printf("%s\n", dest);


	char dest3[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src3[] = "Creo que esto cabe";
	longitud = strncmp(dest3, src3, size);
	printf("La longitud funcion real es: %d\n", longitud);
	printf("%s\n", dest3);
	return(0);
}