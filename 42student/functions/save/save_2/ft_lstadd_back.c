/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:17:42 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/05/29 19:35:34 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tail;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tail = ft_lstlast(*lst);
	tail->next = new;
}

/* int main(void)
{
	t_list *temp = NULL;
	t_list *lst1 = NULL;
	t_list *lst2 = NULL;
	t_list *lst3 = NULL;

	lst1 = ft_lstnew("hugo");
	lst2 = ft_lstnew("jorge");
	lst3 = ft_lstnew("peco");
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst2, lst3);
	temp = lst1;
	while(temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
} */
