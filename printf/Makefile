NAME = libftprintf.a
SRC = ft_putchar.c ft_printf.c ft_putstr.c ft_putptr.c \
	ft_putint.c ft_putuint.c ft_puthex.c ft_putm_hex.c
OBJS = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@cp $(LIBFT) .
	@ar x $(LIBFT)
	@$(AR) $(NAME) *.o

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	rm -f $(OBJS)
	rm -f *.o
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	rm -f libft.a
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re