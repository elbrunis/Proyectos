/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:08:12 by biniesta          #+#    #+#             */
/*   Updated: 2024/11/01 23:05:24 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_putptr(void *ptr);
int	ft_putint(int num);
int	ft_putuint(int num);
int	ft_puthex(unsigned int num);
int	ft_putm_hex(unsigned int num);

#endif