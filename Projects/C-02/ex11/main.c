#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int main (void)
{	
	char pr1[] = "Coucou\ntu vas bien ?";
	char pr2[] = "A ver que pasa con la ñ y con los acentos ú";

	ft_putstr_non_printable(pr1);
	write(1, "\n", 1);
	ft_putstr_non_printable(pr2);

	return(0);
}