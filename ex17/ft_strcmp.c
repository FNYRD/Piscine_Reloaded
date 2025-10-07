/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:31:50 by jericard          #+#    #+#             */
/*   Updated: 2025/10/07 13:31:52 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
// int	main(void)
// {
// 	char	cadena[] = "Hola comz estas  s";
// 	char	cadena2[] = "Hola como estas  s";
// 	int		len;

// 	len = ft_strcmp(cadena, cadena2);
// 	printf("%d", len);
// 	return (0);
// }