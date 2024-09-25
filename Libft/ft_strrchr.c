/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:10:57 by biniesta          #+#    #+#             */
/*   Updated: 2024/09/22 14:41:06 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char		ltr;
	const char	*posicion = NULL;

	ltr = (char)c;
	while (*s)
	{
		if (*s == ltr)
		{
			posicion = s;
		}
		s++;
	}
	return ((char *)posicion);
}

/*#include "libft.h"

int	main(void)
{
	char  str[] = "Hola buenas";
	char lttr = 'j';
	char    *resultado;

	resultado = ft_strrchr(str, lttr);
	if(resultado)
	{
		printf("El caraacter'%c'fue encontrado en la posicion: %ld\n", lttr,
			resultado - str);
	}
	else
	{
		printf("El caracter '%c'no fue encontrado\n", lttr);
	}
	return(0);
}*/