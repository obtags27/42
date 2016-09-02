# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhoffman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/30 16:17:42 by jhoffman          #+#    #+#              #
#    Updated: 2016/08/30 16:22:40 by jhoffman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

FILENAMES = main.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror -o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(NAME) $(FILENAMES)

clean:
	/bin/rm -f

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
