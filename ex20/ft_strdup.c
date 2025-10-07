/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:12:22 by jericard          #+#    #+#             */
/*   Updated: 2025/10/07 16:12:23 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <stdio.h>

int	len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char	*new;
	int		i;
	
	new = malloc((len(src)) * sizeof(char));
	if (!new)
		return (NULL);
	i = -1;
	while (src[++i])
		new[i] = src[i];
	new[++i] = '\0';
	return (new);
}

// int	main(void)
// {
// 	char	string[] = "Hola chao";
// 	char	*p;
// 	int		i;

// 	i = -1;
// 	p = ft_strdup(string);
// 	while (p[++i])
// 		printf("%c", p[i]);
// 	return (0);
// }