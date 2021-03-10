#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main (void)
{	
	char dest[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src[] = "Creo que esto cabe";
	
	ft_strstr(dest, src);
	printf("%s\n", dest);


	char dest3[] = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	char src3[] = "Creo que esto cabe";
	strstr(dest3, src3);
	printf("%s\n", dest3);
	return(0);
}