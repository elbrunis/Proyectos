/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:07:17 by biniesta          #+#    #+#             */
/*   Updated: 2024/09/25 18:17:33 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	ts;
	void	*ptr;

    ts = nmemb * size;
	ptr = (void *)malloc(ts);
	if (!ptr)
		return (NULL);
	ptr = ft_memset(ptr, 0, ts);
    return (ptr);
}

// int	main(void)
// {
//     void    *str_void;
//     char    *str;
//     int     length;
//     int     null_count = 0;

//     length = 5; 
// 	str_void = ft_calloc(length, sizeof(char)); // Creamos cadena vacia con longitud = length
//     str = (char *)str_void; // Creamos puntero que apunta la misma cadena para verla en char
//     for (int i = 0; i < length; i++) {
//         if (str[i] == '\0') // Creamos un array para verificar que tenemos el numero de nulos deseados
//             null_count++;
//     }
//     printf("null count: %d\n", null_count);
//     return (0);
// }