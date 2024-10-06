/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:29:57 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/06 14:13:06 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char c)
{
	return ((unsigned char)c >= '0' && (unsigned char)c <= '9');
}
// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('b'));
// 	return (0);
// }