NAME = pruebas

SRC = pruebas.c ft_printf.c ft_putptr.c

LIBFT_DIR = libft
LIBFT = -L$(LIBFT_DIR) -lft

CC = cc
CFLAGS = -Wall -Werror -Wextra 

$(NAME) : $(SRC)
	$(CC) $(CFLAGS) $(SRC) $(LIBFT) -o $(NAME)

clean:
	rm -f $(NAME)

.PHONY: all clean
