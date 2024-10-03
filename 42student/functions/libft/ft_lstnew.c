/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 22:12:34 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/05/29 19:40:44 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
/* int main(void)
{
	char *smth = "dsfsdf";

	printf("Ad before: %s \n", smth);
	t_list *list = ft_lstnew(smth);
	printf("Ad after: %p / %s\n", list, (char *) list->content);
	free(list);
	return(0);
}  */
