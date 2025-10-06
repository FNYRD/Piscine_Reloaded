#include <unistd.h>

// #include <stdio.h>
// #include <time.h>

int ft_sqrt(int nb)
{
	int	square;

	square = 0;
    if (nb > 1)
	{
		while ((square * square) < nb)
			square++;
	}
	if ((square * square) == nb)
		return (square);
	return (0);
}

// int	main(void)
// {
// 	int	p1;

// 	clock_t inicio = clock();
// 	p1 = ft_sqrt(16);
// 	clock_t fin = clock();
// 	double tiempo_ejecucion = (double)(fin - inicio) / CLOCKS_PER_SEC;
// 	printf("The function took: %f seconds...\n", tiempo_ejecucion);
// 	printf("%d\n", p1);
// 	return (0);
// }