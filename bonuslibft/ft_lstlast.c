/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:49:04 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/11 13:36:13 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int	main(void)
// {
// 	t_list nodo;
// 	t_list nodo1;
// 	t_list nodo2;

// 	nodo.content = "papas";
// 	nodo.next = &nodo1;

// 	nodo1.content = "frutas";
// 	nodo1.next = &nodo2;

// 	nodo2.content = "sandias";
// 	nodo2.next = NULL;

// 	t_list *last_node = ft_lstlast(&nodo);

// 	if (last_node)
// 		printf("%s\n", (char *)last_node->content);

// 	return (0);
// }