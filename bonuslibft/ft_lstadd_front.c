/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:50:55 by biniesta          #+#    #+#             */
/*   Updated: 2024/10/11 13:54:17 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(lst && new)
    {
        new->next = *lst;
        *lst = new;
    }
}
// int main()
// {
//     t_list nodo1;
//     t_list nodo2;
//     t_list *lst;
    
//     nodo1.content = "hola";
//     nodo1.next = NULL;
    
//     nodo2.content = "buenas";
//     nodo2.next = NULL;
//     lst = NULL;
    
//     ft_lstadd_front(&lst, &nodo1);
//     ft_lstadd_front(&lst, &nodo2);
//         t_list *current = lst;
//     while (current != NULL)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     return(0);
// }

