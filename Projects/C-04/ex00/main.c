#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main (void)
{	
	char str[] = "Foo Bar pepe0 hola";
	
	printf("%d\n", ft_strlen(str));
	
	printf("%lu\n", strlen(str));
	
	return(0);
}