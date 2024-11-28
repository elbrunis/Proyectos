NAME = get_next_line
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = new_funtion.c get_next_line_utils.c pruebas.c
OBJS = $(SRCS:.c=.o)
HEADER = get_next_line.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re