/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:58:43 by biniesta          #+#    #+#             */
/*   Updated: 2024/11/14 18:55:58 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned long int	ft_strlen(char *str)
{
	unsigned long int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strchar(char *str, char c)
{
	unsigned long int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}

void	ft_bzero(void *str, unsigned long int n)
{
	char				*s;
	unsigned long int	i;

	s = (char *)str;
	i = 0;
	while (i < n)
		s[i++] = '\0';
}

void	*ft_calloc(unsigned long int nmemb, unsigned long int size)
{
	char	*memory;

	memory = malloc(nmemb * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, (nmemb * size));
	return (memory);
}

char	*ft_strcat(char *s1, char *s2)
{
	char *new;
	unsigned long int i;

	new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new || !s1|| !s2)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		new[i] = s1[i];
	i = -1;
	while (s2[++i] != '\0')
		new[ft_strlen(s1) + i] = s2[i];
	new[ft_strlen(s1) + i] = '\0';
	return (new);
}
