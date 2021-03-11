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
	printf("%s\n", point);

	point = strcpy(dest, src);
	printf("%s\n", dest);
	printf("%s\n", point);
	
	return(0);
}