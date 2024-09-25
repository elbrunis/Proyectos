/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:23:48 by biniesta          #+#    #+#             */
/*   Updated: 2024/09/23 17:58:37 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{	
	unsigned char *str = (unsigned char *)s;
	unsigned char ltr = (unsigned char)c;
	size_t	i;
	
	i = 0;
	while(i < n)
	{
		if(str[i] == ltr)
		{
			return(void *)(str + i);
		}
		i++;
	}
	return NULL;
}

/*#include "libft.h"

int	main(void)
{
	char	str[] = "Hola mundo";
	char		ltr;
	void *resultado;
	
	ltr = 'j';
	resultado = ft_memchr(str, ltr, 20);
	if(resultado)
	{
	printf("%ld\n", (char *)resultado - str);
	}
	else
	{
		printf("NULL\n");
	}
	return 0;  
}*/
