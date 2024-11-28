/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:58:31 by biniesta          #+#    #+#             */
/*   Updated: 2024/11/13 17:51:51 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char				*free_and_join(char *save, char *read);
char				*create_line(char *save);
char				*put_rest(char *save);
char				*read_file(int fd, char *save);
char				*get_next_line(int fd);

char				*ft_strchar(char *str, char c);
void				ft_bzero(void *str, unsigned long int n);
unsigned long int	ft_strlen(char *str);
void				*ft_calloc(unsigned long int nmemb, unsigned long int size);
char				*ft_strcat(char *s1, char *s2);
#endif