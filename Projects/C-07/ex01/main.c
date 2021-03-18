#include <stdio.h>
#include <string.h>

int		*ft_range(int min, int max);

int main (void)
{	
	int 	*ptr;
	int		min;
	int		max;
	int		size;
	int		i;

	min = 5;
	max = 14;
	size = max - min;
	
	ptr = ft_range(min, max);

	if (ptr == NULL)
	{
		printf("El puntero es NULO!!");
		return(0);
	}
	
	i = 0;
	while (i < size)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	
}