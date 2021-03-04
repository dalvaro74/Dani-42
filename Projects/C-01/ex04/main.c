#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main ()
{
	int a;
	int b;

	a = 11;
	b = 4;
	
	ft_ultimate_div_mod(&a, &b);
	printf("Division: %d\n", a);
	printf("Modulo: %d\n", b);
	return(0);
}

