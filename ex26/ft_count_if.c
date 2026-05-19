/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:24:57 by jericard          #+#    #+#             */
/*   Updated: 2025/10/08 14:25:01 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// int is_in(char *p)
// {
// 	int		i;

// 	i = 0;
// 	while (p[i])
// 	{
// 		if (p[i] == 'a')
// 		{
// 			return (1);
// 		}
// 		i++;
// 	}
// 	return (0);
// }

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	cond_t;

	i = 0;
	cond_t = 0;
	while (tab[i] != 0)
	{
		if ((f(tab[i])) == 1)
			cond_t++;
		i++;
	}
	return (cond_t);
}

// int	main(void)
// {
// 	char	*tab[] = {"cyz","bc","kfaaaaaal","dabbb",0};
// 	int		n;

// 	n = ft_count_if(tab, &is_in);
// 	printf("%d", n);
// 	return (0);
// }