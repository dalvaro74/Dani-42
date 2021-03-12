#include <stdio.h>
#include <string.h>

int ft_atoi(char *str);

int main (void)
{	
	char str[] = "    ----+--+-123456gg7";
	
	printf("%d\n",ft_atoi(str));
	
	return(0);
}