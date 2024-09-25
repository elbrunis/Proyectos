/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:42:49 by biniesta          #+#    #+#             */
/*   Updated: 2024/09/22 15:12:46 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/* #include "libft.h"

int	main(void)
{
	char str1[] = "Hola aundo";
	char str2[] = "Hola Amigo";
	int result;

	result = ft_strncmp(str1, str2, 9);
	printf("%d\n", result);
	return (0);
}*/