/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:15:17 by jericard          #+#    #+#             */
/*   Updated: 2025/10/07 13:15:19 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>
// #include <time.h>

int ft_iterative_factorial(int nb)
{
	int	result;
	
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);	
	result = nb * (nb - 1);
	nb--;
	while (--nb > 1)
		result *= nb;
	return (result);
}

// int	main(void)
// {
// 	int	p1;
// 	clock_t inicio = clock();
// 	p1 = ft_iterative_factorial(10);
// 	printf("%d\n", p1);
// 	clock_t fin = clock();
// 	double tiempo_ejecucion = (double)(fin - inicio) / CLOCKS_PER_SEC;
// 	printf("The function took: %f seconds...\n", tiempo_ejecucion);
// 	return (0);
// }