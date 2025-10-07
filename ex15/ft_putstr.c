/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:18:42 by jericard          #+#    #+#             */
/*   Updated: 2025/10/07 13:18:47 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

// void	ft_putchar(char a)
// {
// 	write(1, &a, 1);
// }

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
    {
		ft_putchar(str[i]);
		i++;
	}
}

// int	main(void)
// {
//     char	cadena[] = "Hola como estas  s";

//     ft_putstr(cadena);
//     return (0);
// }