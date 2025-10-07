/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:26:43 by jericard          #+#    #+#             */
/*   Updated: 2025/10/07 16:26:46 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// #include <stdio.h>

int *ft_range(int min, int max)
{
	int	*pointer;
	int	i;

	if (!(max > min))
		return (NULL);
	pointer = malloc((max - min) * sizeof(int));
	if (!pointer)
		return (NULL);
	i = 0;
	while (min < max)
	{
		pointer[i] = min;
		min++;
		i++;
	}
	return (pointer);
}

// int	main(void)
// {
// 	int	*p;
// 	int	i;

// 	i = 0;
// 	p = ft_range(5, 10);
// 	while (p[i])
// 	{
// 		printf("%d", p[i]);
// 		i++;
// 	}
// 	return (0);
// }