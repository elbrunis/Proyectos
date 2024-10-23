/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:11:54 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/23 20:00:15 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
    int count;
    
    count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
            {
                char c = (char)va_arg(args, int);
				ft_putchr(c);
            }
		}
        else
            write(1, format, 1);
        count++;
		format++;
	}
    va_end(args);
    return(count);
}