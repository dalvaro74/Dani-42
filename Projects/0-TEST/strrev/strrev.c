#include <stdio.h>
#include <unistd.h>

int		get_size(char *str)
{
	int		j;

	j = 0;
	while (*(str+j) != '\0')
	{
		j++;
	}
	return (j);
}

void	print_string(char *str)
{
	int		j;
	
	j = 0;
	while (*(str+j) != '\0')
	{
		write (1, (str+j), 1);
		j++;
	}
}	

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	int		j;
	char	char_tmp;

	size = get_size(str);
	i = size - 1;
	j = 0;

	while (j <= i)
	{
		char_tmp = str[i];
		str[i] = str[j];
		str[j] = char_tmp;
		j++;
		i--;
	}
	return (str);	
}
