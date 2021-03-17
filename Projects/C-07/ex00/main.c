#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int main (void)
{	
	int num = 102;
	
	printf("%d\n",ft_strdup(num));
	
	return(0);
}