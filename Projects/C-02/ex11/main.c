#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int main (void)
{	
	char pr1[] = "0dcbsidwhiu";
	char pr2[] = "ñ";

	ft_putstr_non_printable(pr1);
	write(1, "\n", 1);
	ft_putstr_non_printable(pr2);

	return(0);
}