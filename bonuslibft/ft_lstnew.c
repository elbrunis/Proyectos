/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:20:58 by biniesta          #+#    #+#             */
/*   Updated: 2024/12/08 14:30:20 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new_nodo;

	new_nodo = (t_list *)malloc(sizeof(t_list));
	if (!new_nodo)
		return (NULL);
	new_nodo->content = content;
	new_nodo->next = NULL;
	return (new_nodo);
}
// int	main(void)
// {
// 	t_list *nodo;

// 	nodo = ft_lstnew("Nodo 1");
// 	if (nodo)
// 	{
// 		printf("Contenido del nodo 1: %s\n", (char *)nodo->content);
// 		printf("Next del nodo 1: %p\n", (void *)nodo->next);
// 	}
// 	free(nodo);
// 	return (0);
// }