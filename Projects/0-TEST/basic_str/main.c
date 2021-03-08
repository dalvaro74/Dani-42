#include <stdio.h>
#include <unistd.h>

char	*basic_str(char *str);

int main ()
{
	/*
		El meollo de todo esto es como hago una funcion que me cambie la primera
		letra de una cadena que le paso como literal, es decir:
		funcion_magica("Cadena literal");
	*/

	char	*str0;

	// NO FUNCIONA
	//str0 = "Ole tu si que vales, o quiza no";
	//basic_str(str0);
	//NI
	//basic_str("Ole tu si que vales, o quiza no");
	
	// SI FUNCIONA
	char str1[] = "Ole tu si que vales, o quiza no";
	
	//ft_basic_str("Ole tu si que vales, o quiza no");
	str0 = basic_str(str1);
	printf("%s\n", str0);
	// Tambien sirve
	printf("%s\n", str1);	

	return(0);
}