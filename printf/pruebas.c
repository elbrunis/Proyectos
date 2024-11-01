/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:03:12 by biniesta          #+#    #+#             */
/*   Updated: 2024/11/01 23:05:58 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int value;
	int value1;
	char		c = 'Z';
    char		*str = "Hello, World!";
    int			decimal = -12345;
    unsigned int udecimal = 3000000000;
    int			hex = 255;
    void		*ptr = &decimal;

    value = ft_printf("Character: %c, String: %s, Decimal: %d, Unsigned: %u, Hex (lower): %x, Hex (upper): %X, Pointer: %p, Percent: %%\n", 
              c, str, decimal, udecimal, hex, hex, ptr);
	value1 = printf("Character: %c, String: %s, Decimal: %d, Unsigned: %u, Hex (lower): %x, Hex (upper): %X, Pointer: %p, Percent: %%\n", 
              c, str, decimal, udecimal, hex, hex, ptr);

	ft_printf("Valor devuelto en el mio: %d\n", value);
	printf("Valor devuelto en el otro: %d\n", value1);

	return (0);
}