#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main (void)
{	
	char *point;

	char dest[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src[] = "Creo que esto cab";	
	point = ft_strcpy(dest, src);
	printf("%s\n", dest);
	printf("%s", point);

	/*
	char dest2[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src2[] = "Creo que esto cab";
	strcpy(dest2, src2);
	printf("%s\n", dest2);
	*/
	return(0);
}