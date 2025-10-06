#include <unistd.h>

void	ft_putchar(char a);

void ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number != '9')
	{
		ft_putchar(number);
		number++;
	}
	ft_putchar(number);
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/