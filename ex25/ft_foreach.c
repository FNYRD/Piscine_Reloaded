/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:17:00 by jericard          #+#    #+#             */
/*   Updated: 2025/10/08 13:19:47 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	unsigned int	n;

// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		n = -nb;
// 	}
// 	else
// 		n = nb;
// 	if (n < 10)
// 		ft_putchar(n + '0');
// 	else
// 	{
// 		ft_putnbr(n / 10);
// 		ft_putchar(n % 10 + '0');
// 	}
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	while (++i < length)
	{
		f(tab[i]);
	}
}

// int	main(void)
// {
// 	int	tab[3];

// 	tab[0] = 123;
// 	tab[1] = 456;
// 	tab[2] = 789;
// 	ft_foreach(tab, 3, &ft_putnbr);
// 	return (0);
// }
