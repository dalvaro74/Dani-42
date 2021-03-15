#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{	
	int longitud;
	int n;

	n = 4;
	
	longitud = ft_strncmp("\200", "\0",n);
	printf("La longitud de lo mio es: %d\n", longitud);
	longitud = strncmp("\200", "\0",n);
	printf("La longitud funcion real es: %d\n", longitud);

	printf("\n");

	longitud = ft_strncmp("ABCD", "ABCD",n);
	printf("La longitud de lo mio es: %d\n", longitud);
	longitud = strncmp("ABCD", "ABCD",n);
	printf("La longitud funcion real es: %d\n", longitud);
}