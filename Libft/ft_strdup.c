/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:31:39 by biniesta          #+#    #+#             */
/*   Updated: 2024/09/25 20:26:08 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;
    int     i;

    i = 0;
	if (!s)
        return (NULL);
    
	len = ft_strlen((char *)s) + 1;   
	
	str = (char *)malloc(sizeof(char) * (len));
	
    if(!str)
        return (NULL);
		
    while (s[i])
    {
        str[i] = s[i];
        i++;  
    }
	
    str[i] = '\0';
	
	return (str);
}

// int	main(void)
// {
// 	char *str = ft_strdup("hola buenas");
// 	printf("%s\n", str);
// 	return (0);
// }