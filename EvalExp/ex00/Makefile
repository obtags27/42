# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/29 02:11:19 by ttaggard          #+#    #+#              #
#    Updated: 2016/08/29 02:18:55 by ttaggard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = eval_exp

SRCS = ft_putchar.c ft_putnbr.c ft_atoi.c ft_eval_exp.c 

CC = gcc
CLFAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) -I -c $(SRCS) -o $(NAME)

clean:
	rm -f 

fclean: clean

re: fclean all
