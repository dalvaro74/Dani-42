# include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void    print_array(char* c, int n)
{
    int i;

    i=0;
    while(i<n)
    {
        print_char(c[i]);
        i++;   
    }
}

int     get_position(char* a, char* b, int n)
{
    int pos;

    pos = n;
    while (--pos>=0)
    {
        if (a[pos] != b[pos])
        {
            return(pos);
        }
    }
    return(100);
}

void     check_comma(char* a, char* b, int n)
{
    int j;

    j=0;
    while (j<n)
    {
        if (a[j] != b[j])
        {
            print_char(',');
            print_char(' ');
            break;
        }
        j++;
    }
}

void    print_all_num(char* a, char* b, int n)
{
    int pos;
    int i;
    
    while (pos != 100)
    {
        pos = get_position(a, b, n);
        if (pos == 100)
            break;
        else
        {
            a[pos] = a[pos] +1;
            i = pos+1;
            while (i < n)
            {
                a[i] = a[i-1] + 1;
                i++;
            }
        }
        print_array(a, n);
        check_comma(a,b,n);        
    }
}

void ft_print_combn(int n)
{
    
    char A[9];
    char B[9];
    int i;    

    A[0] = '0';
    B[0] = '9' -n+1;
    i=0;
    
    while(i<n)
    {
        A[i+1] =  A[i] + 1;
        B[i+1] =  B[i] + 1;
        i++;           
    }

    print_array(A, n);
    print_char(',');
    print_char(' ');
    print_all_num(A, B, n);
      
}