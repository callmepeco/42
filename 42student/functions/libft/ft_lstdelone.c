/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:13:20 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/05/29 19:36:13 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
	ft_lstadd_back(&lst1, lst3);

	//printf("steas");
	temp = lst1;
	// printf("u\n");
	ft_lstdelone(lst3, ft_bzero);
	while(temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
} */
