#include <stdio.h>
#include <string.h>

int		ft_str_is_alpha(char *str);

int main (void)
{	
	char pr1[] = "sololetSSSSfffKKKras";
	char pr2[] = "";

	printf("%d\n", ft_str_is_alpha(pr1));
	printf("%d\n", ft_str_is_alpha(pr2));

	return(0);
}