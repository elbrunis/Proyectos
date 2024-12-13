/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:58:43 by biniesta          #+#    #+#             */
/*   Updated: 2024/12/13 19:01:00 by biniesta         ###   ########.fr       */
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

char	*ft_strjoin(char *s1, char *s2)
{
	char				*new;
	unsigned long int	i;
	size_t				s1len;
	size_t				s2len;

	if (!s1 && !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	new = ft_calloc((s1len + s2len + 1), sizeof(char));
	if (!new || !s1 || !s2)
		return (NULL);
	i = -1;
	while (++i < s1len)
		new[i] = s1[i];
	i = -1;
	while (++i < s2len)
		new[s1len + i] = s2[i];
	new[s1len + i] = '\0';
	return (new);
}
