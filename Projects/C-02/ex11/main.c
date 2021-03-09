#include <stdio.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);

int main (void)
{	
	char pr1[] = "Coucou\ntu vas bien ?";
	char pr2[] = "SS S";

	ft_putstr_non_printable(pr1);
	ft_putstr_non_printable(pr2);

	return(0);
}