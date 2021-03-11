#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main (void)
{	
	char *point;

	char pr1[] = "fggg YYY 123";
	char pr2[] = "SS Sos ";

	point = ft_strupcase(pr1);
	printf("%s\n", pr1);
	printf("%s\n", point);

	point = ft_strupcase(pr2);
	printf("%s\n", pr2);
	printf("%s\n", point);

	return(0);
}