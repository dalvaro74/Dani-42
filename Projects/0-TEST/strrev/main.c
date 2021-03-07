#include <stdio.h>
#include <unistd.h>

char	*ft_strrev(char *str);
void	print_string(char *str);

int main ()
{
	
	char	*cad0;
	char cad[4];

	/*
		Tengamos en cuenta que un array de caracteres no es exactamente lo mismo que un string
		Un string  siempre termina en el caracter null '\0'
		Y debe identificarlo coimo un string para por ejemplo no pintar el ultimo caracter
	*/

	// Asi ve la variable como un array de caracter 
	cad[0] = 'H';
	cad[1] = 'o';
	cad[2] = 'l';
	cad[3] = 'a';

	// Asi ve la variable como un string
	char cad2[] = "Hola Mundo de los punteros de char";

	//Todo esto funciona para pintarlos, pero solo funciona cad y cad2 cuando quiero modificar el valor del array pasado.
	//ft_strrev( "Hola Mundo de los punteros de char");
	//write (1, "\n", 1);
	ft_strrev(cad);
	//write (1, "\n", 1);
	//ft_strrev( cad2);
	write (1, "\n", 1);
	print_string(cad);

	/*
		Bear in mind that double quotes are for string and single quotes for character so,
		write(1, 'p', 1); DON'T WORK
		write(1, "p", 1); WORK
	*/
	
	//ft_strrev("Ole tu si que vales, si si");
	//print_string("Ole tu si que vales, si si");
	// Esto de abajo da un segmentation fault
	//ft_strrev("Ole tu si que vales, o quiza no");

	return(0);
}

