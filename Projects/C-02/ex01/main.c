#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{	
	int		n;

	char dest[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src[] = "Creo que esto cabe";
	n = 20;

	
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);

	char dest2[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src2[] = "Creo que esto cabe";
	strncpy(dest2, src2, n);
	printf("%s\n", dest2);
	return(0);
}