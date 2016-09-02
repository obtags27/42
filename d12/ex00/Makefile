NAME = ft_display_file

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c \
	   srcs/ft_strlen.c ft_display_file.c 
OBJS = ft_putchar.o ft_putstr.o ft_strlen.o ft_display_file.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -I Includes -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
