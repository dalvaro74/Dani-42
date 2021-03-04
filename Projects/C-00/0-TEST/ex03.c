#include <unistd.h>
#include <stdio.h>
int main( )
{
	char num;
	num = '0';
	while(num <='9')
	{
		write(1, &num, 2);
		num++;
	}
	printf("\n");
}

