#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int main (void)
{	
	char *ptr;
	
	ptr = ft_strdup("abc");
	
	printf("%s\n",ptr);
	
	return(0);
}