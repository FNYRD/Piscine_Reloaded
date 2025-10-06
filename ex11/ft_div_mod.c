#include <unistd.h>

// #include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	p1;
// 	int	p2;

// 	ft_div_mod(10, 2, &p1, &p2);
// 	printf("%d - %d", p1, p2);
// 	return (0);
// }