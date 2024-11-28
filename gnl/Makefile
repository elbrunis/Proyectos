NAME = program
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = get_next_line.c get_next_line_utils.c pruebas.c
OBJS = $(SRCS:.c=.o)
HEADER = get_next_line.h

all: $(NAME)

#crea el programa
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@rm -f *.o

#crea los objetos
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)./

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re