#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int main (void)
{	
	char pr1[] = "fggg gYY 123 y no hace ni 10 años que ocurrio ";
	char pr2[] = "SS S";

	printf("%s\n", ft_strcapitalize(pr1));
	printf("%s\n", ft_strcapitalize(pr2));

	return(0);
}