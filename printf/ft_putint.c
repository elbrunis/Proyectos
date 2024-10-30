/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:18:58 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/29 12:32:37 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int num)
{
	char *str;
	int i;
	int size;

	i = 0;
	size = 0;
	str = ft_itoa(num);
	if (!str)
		return (0);
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++; 
        size++;
	}
	free(str);
	return (size);
}