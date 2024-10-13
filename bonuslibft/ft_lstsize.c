/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:22:50 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/11 13:19:32 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
// int	main(void)
// {
// 	   t_list nodo;
//     t_list nodo1;
//     t_list nodo2;

// 	nodo.content = "Hola";
//     nodo.next = &nodo1;

//     nodo1.content = "Hola";
//     nodo1.next = &nodo2;

//     nodo2.content = "Hola";
//     nodo2.next = NULL;

// 	int result = ft_lstsize(&nodo);
// 	printf("%d", result);
//     return(0);
// }