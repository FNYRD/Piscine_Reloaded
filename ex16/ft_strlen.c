/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:26:58 by jericard          #+#    #+#             */
/*   Updated: 2025/10/07 13:27:00 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
// int	main(void)
// {
// 	char	cadena[] = "Hola como estas  s";
// 	int		len;

// 	len = ft_strlen(cadena);
// 	printf("%d", len);
// 	return (0);
// }