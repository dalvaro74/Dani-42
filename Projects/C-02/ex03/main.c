#include <stdio.h>
#include <string.h>

int		ft_str_is_numeric(char *str);

int main (void)
{	
	char pr1[] = "122 22222";
	char pr2[] = "ggg";

	printf("%d\n", ft_str_is_numeric(pr1));
	printf("%d\n", ft_str_is_numeric(pr2));

	return(0);
}