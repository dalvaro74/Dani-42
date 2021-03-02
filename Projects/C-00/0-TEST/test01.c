# include <unistd.h>
# include <stdio.h>

int main( )
{
	
	int num;
	int mod;
	int contador;
	char numchar[12];
	const int int2char = 48;
	char negativo;
	int flag_negativo;
	int i;

	contador = 0;
	num = -103008970;
	negativo = '-';

	if (num <0)
	{
		num = num * (-1);
		write(1,&negativo,1);
	}
	do
	{
		mod = num%10;
		numchar[contador] = mod + int2char;
		contador ++;
		num = num/10;
	}
	while (num!=0);

	for (i = contador-1; i>=0; i--)
	{
		if (flag_negativo)
		write(1,&numchar[i],1);
	}
	return 0;
}