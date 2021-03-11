#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int main (void)
{	
	char *point;

	char pr1[] = "fggg YYY 123";
	char pr2[] = "SS SoS";

	point = ft_strlowcase(pr1);
	printf("%s\n", pr1);
	printf("%s\n", point);

	point = ft_strlowcase(pr2);
	printf("%s\n", pr2);
	printf("%s\n", point);

	return(0);
}