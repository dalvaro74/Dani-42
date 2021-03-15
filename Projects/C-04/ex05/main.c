#include <stdio.h>
#include <string.h>

int		ft_atoi_base(char *str, char *base);

int main (void)
{	
	char base[] = "0123456789abcdef";
	char str[] = "ff";

	
	printf("%d\n",ft_atoi_base(str, base));
	
	return(0);
}