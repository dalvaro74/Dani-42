#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str);

int main (void)
{	
	char str[] = "+214748364";
	
	printf("%d\n",ft_atoi(str));
	printf("%d\n",atoi(str));
	
	return(0);
}