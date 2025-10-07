/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:06:17 by jericard          #+#    #+#             */
/*   Updated: 2025/10/07 13:06:19 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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