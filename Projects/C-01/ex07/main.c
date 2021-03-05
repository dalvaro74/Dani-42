#include <stdio.h>
#include<string.h> 

void	ft_rev_int_tab(int *tab, int size);

int main ()
{
	int tab[10] = {1,2,3,4,5,6,7,8,9,0};
	int size;
	int i;

	//tab[0] =5;

	size = sizeof tab / sizeof tab[0];	
	ft_rev_int_tab(tab, size);

	i=0;
	while (i<size)
	{
		printf("%d,",tab[i]);
		i++;
	}

	return(0);
}

