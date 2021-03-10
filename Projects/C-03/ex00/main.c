#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int main (void)
{	
	int longitud;

	char dest[] = "ab";
	char src[] = "abc";
	
	longitud = ft_strcmp(dest, src);
	printf("La longitud de lo mio es: %d\n", longitud);


	char dest3[] = "ab";
	char src3[] = "abc";
	longitud = strcmp(dest3, src3);
	printf("La longitud funcion real es: %d\n", longitud);	
	return(0);
}