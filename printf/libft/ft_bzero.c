/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:05:16 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/05 19:47:13 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
// int	main(void)
// {
// 	char str[] = "sexi";

// 	size_t str_length = ft_strlen(str);

// 	void *ptr = (void *)str;
// 	size_t bzero_nulls = 3;
// 	ft_bzero(ptr, bzero_nulls);

// 	for (size_t i = 0; i < str_length; i++)
// 	{
// 		if (str[i] == '\0')
// 		{
// 			printf("Bzero en la posicion: %ld\n", i + 1);
// 		}
// 		else
// 		{
// 			printf("No bzero en la posicion: %ld\n", i + 1);
// 		}
// 	}
// 	return (0);
// }