/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:03:12 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/30 12:45:39 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int value;
	int value1;
	unsigned int num; 

	num = 43433;
	value = ft_printf("el   Mio:%u\n", num);
	value1 = printf("original:%x\n", num);

	printf("Valor devuelto en el mio: %d\n", value);
	printf("Valor devuelto en el otro: %d\n", value1);

	return (0);
	
}