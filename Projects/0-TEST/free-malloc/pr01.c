#include <stdlib.h>
#include <stdio.h>

int		main (void)
{
	unsigned int num_elementos;
	int *ptr = NULL;

	num_elementos = 5;

	ptr = malloc(num_elementos * sizeof(int));
	if (ptr != NULL)
	{
		*ptr = 45678955;
	}

	printf("%d\n", *ptr);

	free(ptr);
	return (0);
}
