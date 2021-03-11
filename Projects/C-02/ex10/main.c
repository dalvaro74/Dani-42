#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main (void)
{	
	unsigned int size;
	int longitud;

	size = 2;
	char dest[] = "hola Mundo";
	char src[] = "HOLA";
	
	longitud = ft_strlcpy(dest, src, size);
	printf("La longitud de lo mio es: %d\n", longitud);
	printf("%s\n", dest);

	char dest2[] = "hola Mundo";
	char src2[] = "HOLA";

	longitud = strlcpy(dest2, src2, size);
	printf("La longitud funcion real es: %d\n", longitud);
	printf("%s\n", dest2);
	return(0);
}