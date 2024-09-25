/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:21:11 by biniesta          #+#    #+#             */
/*   Updated: 2024/09/23 18:53:22 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *st1 = (const unsigned char *)s1;
    const unsigned char *st2 = (const unsigned char *)s2;
    size_t   i;

    i = 0;
    while(i < n)
    {
        if(st1[i] != st2[i])
        {
            return(int)st1[i] - st2[i];
        }
        i++;
    }
    return(0);
}
 
/*#include "libft.h" PREGUNTAR POR QUE CUANDO SE PASA EL BUFFER NO ME DA 0
int main()
{
    char    str1[] = "Hola buenas noches";
    char    str2[] = "Hola buenas noches";
    int     resultado = ft_memcmp(str1, str2, 20);

    printf("%d\n",resultado);
    return(0);
}*/
