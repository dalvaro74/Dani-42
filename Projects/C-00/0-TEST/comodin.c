#include <unistd.h>
#include <stdio.h>

int main()
{
	char *str;
	str = "lol";

	printf("%c %p\n", *str, str);

	printf("%c %d\n", *str, *str);
	printf("%c %s\n", *str, str);

	return (0);

}