#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *s1, char *s2);

int main (void)
{	
	char 	*point;
	
	char s1[12] = "abcde";
	char s2[] = "12345";
	
	point = ft_strcat(s1, s2);
	printf("%s\n", point);

	

	char sa[12] = "abcde";
	char sb[] = "12345";
	
	strcat(sa, sb);
	printf("%s\n", sa);
	return(0);
}