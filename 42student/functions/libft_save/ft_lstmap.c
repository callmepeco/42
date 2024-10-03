/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:06:19 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/02 20:34:49 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterates the list 'lst' and applies the function 'f' on the content of
// each node. Creates a new list resulting of the successive applications
// of the function 'f'. The 'del' function is used to delete the content
// of a node if needed

// needs 2 t_list
// depois um if para f e aplicar em temp que vai ser a nova lista = lstnew(f(lst->content))
// else temp = lstnew(lst->content)
// depois um if para caso temp nao exista e fazer um lstclear(&temp, del)
// dpois um lstadd_back(&new_list, new_node)
// lst = lst->next;

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*nodes;
	t_list	*lst2;
	t_list	*head;

	head = NULL;
	if (!f || !lst || !del)
		return (NULL);
	while (lst)
	{
		nodes = f(lst->content);
		lst2 = ft_lstnew(nodes);
		if (!lst2)
		{
			del(nodes);
			ft_lstclear(&head, (*del));
			return (head);
		}
		ft_lstadd_back(&head, lst2);
		lst = lst->next;
	}
	return (head);
}
