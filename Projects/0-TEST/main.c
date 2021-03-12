
#include <stdio.h>
#include <string.h>

int main (void)
{
	char cadena[] = "123456789";
    printf("%lu\n", sizeof(char)); 
    printf("%lu\n", sizeof(int)); 
    printf("%lu\n", sizeof(float)); 
    printf("%lu\n", sizeof(double));
    printf("%lu\n", sizeof(cadena));  

    return 0; 
}

