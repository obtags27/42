# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 19:23:48 by ttaggard          #+#    #+#              #
#    Updated: 2016/08/23 17:06:35 by ttaggard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
		  srcs/ft_strlen.c srcs/ft_swap.c

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

CC = gcc
CFLAGS ?= -Wall -Wextra -Werror 
CFLAGS += -I includes
AR ?= ar

all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re:	fclean all

$(NAME): $(OBJS)
	$(AR) rcs $@ $(OBJS)

$(OBJS): $(SRCS) 
	$(CC) $(CFLAGS) -c $^

.PHONY: clean fclean re
