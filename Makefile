CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re