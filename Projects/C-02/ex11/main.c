#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);

int main (void)
{	
	char pr1[] = "Coucou\ftu vas bien ?";
	char pr2[] = "SS\tS";

	ft_putstr_non_printable(pr1);
	write(1, "\n", 1);
	ft_putstr_non_printable(pr2);

	return(0);
}