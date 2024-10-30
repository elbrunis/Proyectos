/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:11:54 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/29 17:04:26 by biniesta         ###   ########.fr       */
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
				ft_putchar_fd(c, 1);
            }
			if(*format == 's')
			{
				char *str = va_arg(args, char*);
				ft_putstr_fd(str, 1);
			}
			if(*format == 'p')
			{
				void *ptr = va_arg(args, void*);
				ft_putptr(ptr);
			}
			if(*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);
				count += ft_putint(num);
			}
			if(*format == 'u')
			{
				unsigned int num =(unsigned int)va_arg(args, int);
				count += ft_putuint(num);
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