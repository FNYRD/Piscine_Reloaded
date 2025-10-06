#include <unistd.h>

void	ft_putchar(char a);

void ft_print_alphabet(void)
{
	char	alpha;
	int		count;

	alpha = 'a';
	count = 1;
	while (count <= 26)
	{
		ft_putchar(alpha);
		alpha++;
		count++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/