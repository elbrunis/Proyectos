#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
#include <stdlib.h>

int		ft_isalnum(char c);
int		ft_strlen(char *str);
void	*memset(void *ptr, int value, size_t num);

#endif