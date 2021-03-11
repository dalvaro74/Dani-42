#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int main (void)
{	
	int longitud;
	
	longitud = ft_strcmp("\200", "\0");
	printf("La longitud de lo mio es: %d\n", longitud);
	longitud = strcmp("\200", "\0");
	printf("La longitud funcion real es: %d\n", longitud);

	printf("\n");

	longitud = ft_strcmp("ABCD", "ABCG");
	printf("La longitud de lo mio es: %d\n", longitud);
	longitud = strcmp("ABCD", "ABCE");
	printf("La longitud funcion real es: %d\n", longitud);

	return(0);
}