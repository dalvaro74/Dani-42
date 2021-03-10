#include <stdio.h>
#include <string.h>

int		ft_str_is_printable(char *str);

int main (void)
{	
	char pr1[] = "\n";
	char pr2[] = "SS S";

	printf("%d\n", ft_str_is_printable(pr1));
	printf("%d\n", ft_str_is_printable(pr2));

	return(0);
}