/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:06:43 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/06 14:14:06 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char c)
{
	return ((unsigned char)c >= 32 && (unsigned char)c <= 126);
}
// int	main(void)
// {
// 	printf("%d\n", ft_isprint('.'));
// 	return (0);
// }