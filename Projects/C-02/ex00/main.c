#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main (void)
{	
	char dest[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src[] = "Creo que esto cabe";
	
	ft_strcpy(dest, src);
	printf("%s\n", dest);

	char dest2[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src2[] = "Creo que esto cabe";
	strcpy(dest2, src2);
	printf("%s\n", dest2);
	return(0);
}

