/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:52:49 by biniesta          #+#    #+#             */
/*   Updated: 2024/09/22 14:38:19 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	l;

	l = (char)c;
	while (*s)
	{
		if (*s == l)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

/*#include "libft.h"

int	main(void)
{
	const char	*cadena = "Hola, mundo!";
	char		caracter;
	char		*resultado;

	caracter = 'i';
	resultado = ft_strchr(cadena, caracter);
	if (resultado) {
		printf("El carácter '%c' encontrado en la posición: %ld\n", caracter,
			resultado - cadena);
	} else {
		printf("El carácter '%c' no se encontró en la cadena.\n", caracter);
	}
	return (0);
}
*/