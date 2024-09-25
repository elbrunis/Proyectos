/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:28:08 by biniesta          #+#    #+#             */
/*   Updated: 2024/09/24 12:04:28 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*CORREGIR ESTE CODIGO El codigo (en este caso) al buscar caca deberia de darnos NULL pero nos devuelve caca*/
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len; //Tamaño de needle
    size_t i; //Contador para haystack
    size_t j; //Contador para needle
    
    needle_len = 0;
    i = 0;
    if(!(*needle))
    {
        return(char *)haystack;
    }
    while(needle[needle_len])
    {
        needle_len++;
    }
    if (needle_len > len)
    {
        return NULL;
    }
    while(i <= (len - needle_len))
    {
        j = 0;
        while(j < needle_len && haystack[i + j] == needle[j])
        {
            j++;
        }
        if(j == needle_len)
        {
            return(char *)&haystack[i];
        }
        i++;
    }
    return NULL;
}

int main()
{
    const char *haystack = "Hola mundo";
    const char *needle = "caca";
    char *resultado;
    
    resultado = ft_strnstr(haystack, needle, 20);
    if(resultado)
    {
        printf("%s\n", resultado);
    }
    else
    {
        printf("NULL");
    }
    return (0);
}