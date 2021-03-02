# include <unistd.h>
# include <stdio.h>

int main( )
{
	
	const int nums = 10;
    int array_digitos[10];
    char char_num;
    int limite_sup;
    int i,j,k,n ; 

    n= 3;

    for (i=0; i<n; i++)
    {
        array_digitos[i]=i;                
    }

    for (i=0; i<120; i++)
    {
        
        for (k=0; k<n; k++)
        {
            char_num = array_digitos[k] +48;
            write(1,&char_num,1);
        } 
        printf(",");              
    }
    
}