# include <unistd.h>

void    ft_putnbr(int nb)
{
	/*
        Daniel Alvaro - 27/02/2021

        VARIABLES:
        mod: variable para guardar los modulos con los que obtenemos la ultima cifra
        num: es el numero que tenemos que representar
        contador: tendra en cuenta el numero de digitos del numero.
        numchar: array para guardar las cifras
        int2char: permite pasar el numero entero a su correspondiente caracter, segun el codigo ASCII es necesario sumar 48 unidades
        negativo: tendra en cuenta el signo del numero a representar

        LOGICA:
        Conforme vamos recorriendo el numero obtenemos su ultima cifra mediante el modulo y la eliminamos mediante la division. Este proceso se repetira
        hasta que la division de cero.
        Las cifras obtenidas se guardaran en un array. Como se almacenan de atras hacia delanta, deberemos recorrerlo en sentido inverso para escribir
        el numero de manera correcta.
        Para facilitar la logica convertiremos los numero negativos en positivos y simplemente añadiremos al principio el signo negativo. 
    */
    
    int mod;
    int num;
	int contador;
	char numchar[12];
	const int int2char = 48;
	char negativo;
	int i;

	contador = 0;
	num = nb;
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
		write(1,&numchar[i],1);
	}
}