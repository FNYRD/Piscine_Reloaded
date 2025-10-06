#include <unistd.h>

// #include <stdio.h>

void ft_swap(int *a, int *b)
{
    int     fake_pointer;

    fake_pointer = *a;
    *a = *b;
    *b = fake_pointer;
}

// int	main(void)
// {
// 	int	val;
//     int	val2;

// 	val = 1000000;
//     val2 = 999999;
//     printf("%d - %d\n", val, val2);
// 	ft_swap(&val, &val2);
// 	printf("%d - %d", val, val2);
// 	return (0);
// }