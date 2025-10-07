/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:04:19 by jericard          #+#    #+#             */
/*   Updated: 2025/10/07 13:04:21 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void    ft_print_alphabet(void)
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