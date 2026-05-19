# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jericard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/09 17:33:53 by jericard          #+#    #+#              #
#    Updated: 2025/10/09 17:33:55 by jericard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_display_file
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
SRC			= main.c
OBJS		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re