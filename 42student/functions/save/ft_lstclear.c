/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:36:41 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/05/29 20:16:21 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = *lst;
		del(temp->content);
		*lst = temp->next;
		free(temp);
	}
}
/* void ft_test_func(void *s)
{
	printf("%s\n", (char *)s);
}
int	main(void)
{
	t_list *lst1;
	t_list *lst2;
	t_list *lst3;

	lst1 = ft_lstnew("tst");
	lst2 = ft_lstnew("laele2");
	lst3 = ft_lstnew("laele3");
	lst1->next = lst2;
	lst2->next = lst3;

	ft_lstclear(&lst1, ft_test_func);
	printf("%s", (char *)lst1->content);
} */
