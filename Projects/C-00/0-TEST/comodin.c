#include <unistd.h>
#include <stdio.h>

int main()
{
	char *str;
	str = "lol";
	int tab[10] = {1,2,3,4,5,6,7,8,9,0};

	printf("%d  %d,  %p\n", *tab, *(tab+1), tab);
	


	printf("%c %p\n", *str, str);

	printf("%c %d\n", *str, *str);
	printf("%c %s\n", *str, str);

	return (0);

}