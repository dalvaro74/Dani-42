#include <stdio.h>

void ft_swap (int *a, int *b);

int main ()
{
	int a;
	int b;

	a = 3;
	b = 5;
	printf("%d - %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d - %d\n", a, b);
	return(0);
}

