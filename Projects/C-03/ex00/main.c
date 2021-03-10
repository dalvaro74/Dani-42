#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int main (void)
{	
	unsigned int size;
	int longitud;

	char dest[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src[] = "Creo que esto cabe";
	
	longitud = ft_strcmp(dest, src);
	printf("La longitud de lo mio es: %d\n", longitud);
	printf("%s\n", dest);


	char dest3[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src3[] = "Creo que esto cabe";
	longitud = strcmp(dest3, src3);
	printf("La longitud funcion real es: %d\n", longitud);
	printf("%s\n", dest3);
	return(0);
}