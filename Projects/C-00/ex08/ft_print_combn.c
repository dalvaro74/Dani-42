# include <unistd.h>

void ft_print_combn(int n)
{
    /*
        El algoritmo para rellenar las distintas posiciones es el siguiente:
        nums = Son los numeros del 0 al 9, sera una constante de valor 10, pero el algoritmo 
        generalizara para casos como por ejemplo coger solo del 0 al 5 (valor 5)
        n = numero de digitos de los numeros a ordenar podra ir de 1 a 9
        i = posicion de la cifra dentro del numero, ira desde 0 hasta n-1

        Asi para cada posicion j los valores posibles seran [i, nums-(n+i)]

        Los valores posibles de cada posicion se guardaran en un array de enteros de dimension [9][9]
        Y tendre que ver como me apaño para recorrerlos para poder imprimirlos con un write
    */
    const int nums = 10;
    int array_digitos[10][10];
    int limite_sup;
    int i,j,k,n ; 

    n= 5;

    for (i=0; i<n; i++)
    {
        limite_sup = nums - (n+i);
        for (k=i; k<=limite_sup;k++)
        {
            array_digitos[i][k] = k;
        }                
    }


    for (i=0; i<10; i++)
    {
        for (i=0; i<10; i++)
        {
            for (i=0; i<10; i++)
            {

            }
        }
    }
}