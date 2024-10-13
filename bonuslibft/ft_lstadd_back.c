/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:37:57 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/11 18:40:32 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
}
// int	main(void)
// {
// 	t_list nodo1;
// 	t_list nodo2;
// 	t_list *lst;

// 	nodo1.content = "Hola";
// 	nodo1.next = NULL;

// 	nodo2.content = "buenas";
// 	nodo2.next = NULL;
// 	lst = NULL;

// 	ft_lstadd_back(&lst, &nodo1);
// 	ft_lstadd_back(&lst, &nodo2);
// 	t_list *result = lst;
// 	while (result != NULL)
// 	{
// 		printf("%s\n", (char *)result->content);
// 		result = result->next;
// 	}
// 	return (0);
// }