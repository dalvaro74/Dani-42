#include <stdio.h>
#include <string.h>

int		ft_str_is_uppercase(char *str);

int main (void)
{	
	char pr1[] = "GGNKJKJKJKJ";
	char pr2[] = "";

	printf("%d\n", ft_str_is_uppercase(pr1));
	printf("%d\n", ft_str_is_uppercase(pr2));

	return(0);
}