/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:59:37 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/02 19:09:57 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns the last node of the list

t_list	*ft_lstlast(t_list *lst)
{
	if(!lst)
		return(NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list *lst1 = NULL;
	t_list *lst2 = NULL;
	t_list *lst3 = NULL;

	lst1 = ft_lstnew("hugo");
	lst2 = ft_lstnew("jorge");
	lst1->next = lst2;
	lst3 = ft_lstlast(lst1);
	printf("%s", (char *)lst3->content);
	free(lst1);
	//free(lst2);
	free(lst3);


} */
