#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main (void)
{	
	char str[] = "Foo Bar pepe hola";
	char to_find[] = "Fok";
	
	printf("%s\n", ft_strstr(str, to_find));


	char str2[] = "Foo Bar pepe hola";
	char to_find2[] = "Foof";
	
	printf("%s\n", strstr(str2, to_find2));
	
	return(0);
}