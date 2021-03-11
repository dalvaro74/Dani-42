#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main (void)
{	
	char 	*point;
	unsigned int	n;

	n = 1;	
	char s1[12] = "abcd";
	char s2[] = "12345";
	
	point = ft_strncat(s1, s2,n);
	printf("%s\n", point);

	

	char sa[12] = "abcde";
	char sb[] = "12345";
	
	strncat(sa, sb,n);
	printf("%s\n", sa);
	return(0);
}