/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:03:12 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/28 20:02:56 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    main()
{
    int num;
    
    num = 45873;
    ft_printf("Mi propia funcion hace: %p\n", &num);
    printf("la version original hace:%p\n", &num);
    return(0);
}