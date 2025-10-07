/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:48:55 by jericard          #+#    #+#             */
/*   Updated: 2025/10/07 13:48:59 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

// void	ft_putchar(char a)
// {
// 	write(1, &a, 1);
// }

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            ft_putchar(argv[i][j]);
			j++;
        }
		ft_putchar('\n');
		i++;
    }
}

int main(int argc, char **argv)
{
    int 		i;
    int 		j;
	char     	*fake_pointer;
	
	if (argc < 2)
		return (0);
	j = argc - 2;
	while(j--)
	{
		i = 0;
		while (++i < argc - 1)
		{
			if ((ft_strcmp(argv[i], argv[i + 1])) > 0)
			{
				fake_pointer = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = fake_pointer;
			}
		}
	}
	ft_print_params(argc, argv);
    return (0);
}