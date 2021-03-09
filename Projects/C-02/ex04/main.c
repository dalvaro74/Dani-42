#include <stdio.h>
#include <string.h>

int		ft_str_is_lowercase(char *str);

int main (void)
{	
	char pr1[] = "bbbbbbbbtyythjhjh";
	char pr2[] = "gggA";

	printf("%d\n", ft_str_is_lowercase(pr1));
	printf("%d\n", ft_str_is_lowercase(pr2));

	return(0);
}