/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:56:38 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/06 16:44:39 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(const char *s, char c)
{
	int	words;
	int	sub;

	words = 0;
	sub = 0;
	while (*s)
	{
		if (*s != c && sub == 0)
		{
			sub = 1;
			words++;
		}
		else if (*s == c)
		{
			sub = 0;
		}
		s++;
	}
	return (words);
}

static char	*word_dup(const char *s, int start, int end)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}

static void	fill_words(char **result, const char *s, char c)
{
	int	start;
	int	i;
	int	j;

	start = -1;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			if (s[i] == c)
				result[j++] = word_dup(s, start, i);
			else
				result[j++] = word_dup(s, start, i + 1);
			start = -1;
		}
		i++;
	}
	result[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		nwords;

	if (!s)
		return (NULL);
	nwords = num_words(s, c);
	result = (char **)malloc(sizeof(char *) * (nwords + 1));
	if (!result)
		return (NULL);
	fill_words(result, s, c);
	return (result);
}
// int	main(void)
// {
// 	char **split = ft_split("Hello world this is Libft", ' ');

// 	for (int i = 0; split[i] != NULL; i++)
// 	{
// 		printf("%s\n", split[i]);
// 		free(split[i]); // Liberar la memoria de cada palabra
// 	}
// 	free(split); // Liberar el array de punteros
// 	return (0);
// }