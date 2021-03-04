#include <stdio.h>

int		ft_strlen(char *str);

int main ()
{
	char *str;
	
	str = "Hola Pepito, ay Dos mio que se me quema el cocido...";
	
	printf("El numero de caracteres de mi cadena es: %d\n",ft_strlen(str));
	return(0);
}

