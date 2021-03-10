#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{	
	int longitud;
	int n;

	n = 3;
	
	longitud = ft_strcmp("\200", "\0",n);
	printf("La longitud de lo mio es: %d\n", longitud);
	longitud = strcmp("\200", "\0");
	printf("La longitud funcion real es: %d\n", longitud);

	printf("\n");

	longitud = ft_strcmp("ABCD", "ABCE",n);
	printf("La longitud de lo mio es: %d\n", longitud);
	longitud = strcmp("ABCD", "ABCE");
	printf("La longitud funcion real es: %d\n", longitud);
}