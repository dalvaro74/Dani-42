#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char 	g_resultado[40][40];
char *g_literales[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
		"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
		"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety",
		"hundred", "thousand", "million", "billion", "trillion", "quadrillion", "quintillion"};

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

int algorithm(int digit, int position)
{
	int j;
	int k;

	if (digit == 0 && position % 3 != 0)
	{
		g_resultado[position][0] = '0';
		g_resultado[position][1] = '\0';
		return(0);
	}


	if (position == 0 && digit != 0)
	{	
		j = 0;
		while (g_literales[digit][j] != '\0')
		{
			g_resultado[position][j] = g_literales[digit][j];
			j++;
		}
		g_resultado[position][j] = '\0';
		return(0);
	}
	
	if((position + 1) % 3 == 0)
	{
		j = 0;
		k = 0;
		while (g_literales[digit][j] != '\0')
		{
			g_resultado[position][k] = g_literales[digit][j];
			j++;
			k++;
		}
		g_resultado[position][k] = ' ';
		
		k++;
		j = 0;
		// Aqui va la key que tenga 100 (hundred)
		while (g_literales[28][j] != '\0')
		{
			g_resultado[position][k] = g_literales[28][j];
			j++;
			k++;
		}
		g_resultado[position][k] = '\0';		
	}
	
	
	if((position + 2) % 3 == 0)
	{
		if(digit != 1)
		{
			k = 0;
			j = 0;
			while (g_literales[20 + digit -2][j] != '\0')
			{
				g_resultado[position][k] = g_literales[20 + digit -2][j];
				j++;
				k++;
			}
			k++;
			g_resultado[position][k] = '\0';
		}
		else
		{
			g_resultado[position][0] = '~';
		}		
	}
	// De aqui saldrian los thousand, million, etc
	if(position % 3 == 0 && position != 0)
	{
		j = 0;
		k = 0;
		if(digit != 0)
		{
			while (g_literales[digit][j] != '\0')
			{
				g_resultado[position][k] = g_literales[digit][j];
				j++;
				k++;
			}
			g_resultado[position][k] = ' ';		
			k++;
		}
		j = 0;
		// De aqui saldrian los thousand, million, etc
		while (g_literales[28 +(position/3)][j] != '\0')
		{
			g_resultado[position][k] = g_literales[28 +(position/3)][j];
			j++;
			k++;
		}
		g_resultado[position][k] = '\0';
	}
	
	return (0);				
}

void print_result(int size, char *num_entrada)
{
	int i;
	int num_tenty;
	int num_literal;

	i = size;
	while (--i >= 0)
	{
		
		// Aqui tendre que ver que número esta en la siguiente posicion 
		//printf("%s", g_resultado[i]);
		if (g_resultado[i][0] != '0')
		{
			if (g_resultado[i][0] != '~')
			{
				printf("%s", g_resultado[i]);
				if (i != 0)
					printf(" ");
			}
			else
			{
				num_tenty = num_entrada[++i] - 48;
				num_literal = 10 + num_tenty;
				//printf("%d - %d\n", num_tenty,num_literal);
				printf("%s", g_literales[num_literal]);
				if (i != 0)
					printf(" ");
				i--;
			}
		}
	}
}

int main (void)
{
	int i;
	int position;
	int size;
	int number;

	//char 	data[40][50];
	//char 	equivalences[16][20];
	
	char numprueba[] = "28816"; 	

	//printf("%s\n", literales[21]);

	size = ft_strlen(numprueba);
	i = size;
	position = 0;
	//if (size == 1 && )
	while (--i >= 0)
	{
		number = numprueba[i] - 48;
		//printf("digit: %d - position: %d \n", number, position);
		algorithm(number, position);
		
		position++;
	}
	print_result(size, numprueba);
}