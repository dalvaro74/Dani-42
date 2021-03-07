#include <stdio.h>
#include<string.h> 

void	ft_sort_int_tab(int *tab, int size);

int main (void)
{
	int 	tab[14] = {7,3,87,11987,1,77,2,92,15,9,73,5,75,36};
	int 	size;
	int 	i;

	size = sizeof tab / sizeof tab[0];	
	ft_sort_int_tab(tab, size);
	i=0;
	while (i < size)
	{
		printf("%d - ",tab[i]);
		i++; 
	}
	return (0);
}

