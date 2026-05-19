/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:07:15 by jericard          #+#    #+#             */
/*   Updated: 2025/10/09 17:07:18 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h> 

int	main(int argc, char **argv)
{
	int		fd;
	int		numbytes;
	char	buffer[1024];

	if (argc != 2)
	{
		if (argc == 1)
			write(1, "File name missing.\n", 19);
		else
			write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (0);
	}
	numbytes = read(fd, &buffer, sizeof(buffer));
	write(1, &buffer, numbytes);
	return (0);
}
