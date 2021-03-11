#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int main (void)
{	
	char pr1[] = "s alut, cOmment tU vas ? 42moTS quarante-deux; cinquante+et+un";
	char pr2[] = "SS S";

	printf("%s\n", ft_strcapitalize(pr1));
	printf("%s\n", ft_strcapitalize(pr2));

	return(0);
}