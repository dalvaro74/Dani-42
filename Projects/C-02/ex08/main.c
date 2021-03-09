#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int main (void)
{	
	char pr1[] = "fggg YYY 123";
	char pr2[] = "SS S";

	printf("%s\n", ft_strlowcase(pr1));
	printf("%s\n", ft_strlowcase(pr2));

	return(0);
}