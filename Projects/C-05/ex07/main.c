#include <stdio.h>
#include <string.h>

int		ft_find_next_prime(int nb);

int main (void)
{	
	int num = 102;
	
	printf("%d\n",ft_find_next_prime(num));
	
	return(0);
}