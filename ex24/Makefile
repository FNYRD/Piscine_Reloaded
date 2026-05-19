# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jericard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/08 13:15:01 by jericard          #+#    #+#              #
#    Updated: 2025/10/08 18:57:38 by jericard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCDIR = ./srcs

INCDIR = ./includes

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =	$(SRCDIR)/ft_putchar.c \
		$(SRCDIR)/ft_putstr.c \
		$(SRCDIR)/ft_strcmp.c \
		$(SRCDIR)/ft_strlen.c \
		$(SRCDIR)/ft_swap.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/ft.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re