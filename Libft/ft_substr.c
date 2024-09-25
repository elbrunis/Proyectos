/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:30:01 by biniesta          #+#    #+#             */
/*   Updated: 2024/09/25 21:20:19 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{   
    char    *substr;
    char    *str;
    size_t  s_len;

    s_len = 0;
    while(*s)
        s_len++;
        
    str = (char *) malloc(sizeof(char) * s_len);
    
    if(str == NULL)
        return NULL;
    
    while()
    
    
}
int main()
{
    
}