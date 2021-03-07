#include <unistd.h>

void ft_putnbr (int n);

int main ()
{

	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-3008709);
	write(1, "\n", 1);
	return(0);
}

