#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int main ()
{
	/*
	ft_putnbr_base(-2147483648);
	write(1, "\n", 1);
	ft_putnbr_base(2147483647);
	write(1, "\n", 1);
	ft_putnbr_base(0);
	write(1, "\n", 1);
	ft_putnbr_base(-3008709);
	write(1, "\n", 1);
	*/
	ft_putnbr_base(1588603, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-4567, "poniguay");
	write(1, "\n", 1);
	return(0);
}

