#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{	
	char *point;
	int		n;

	n = 18;

	char dest[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src[] = "Creo que esto cabe";
	
	point = ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	printf("%s\n", point);
	
	
	point = strncpy(dest, src, n);
	printf("%s\n", dest);
	printf("%s\n", point);
	
	return(0);
}