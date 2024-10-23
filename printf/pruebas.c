/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:03:12 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/23 20:11:14 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    main()
{
    char c = 'hola';
    ft_printf("El caracter que estoy probando a escribir es: %c\n", c);
    
    return(0);
}