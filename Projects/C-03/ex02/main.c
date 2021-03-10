#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main (void)
{	

	char dest[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src[] = "Creo que esto cabe";
	
	ft_strcat(dest, src);
	printf("%s\n", dest);

	

	char dest3[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src3[] = "Creo que esto cabe";
	strcat(dest3, src3);
	printf("%s\n", dest3);
	return(0);
}