/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:34:53 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/05/29 19:34:51 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	totalsize;

	totalsize = nmemb * size;
	ptr = malloc(totalsize);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, totalsize);
	return (ptr);
}

/* int main(void) //test allocating only 1 int after using calloc for 3 int
{
	char **alloc;
	char *str;
	size_t nmemb;

	nmemb = 5;
	alloc = ft_calloc(nmemb, sizeof(char*));
	if (!alloc)
		return(1);
	str = malloc(sizeof(char)*3);
	ft_memcpy(str, "T1", 2);
	alloc[0] = str;

	while(nmemb--)
	{
		printf("my loop");
		printf("My Func => %s\n", alloc[nmemb]);
		//nmemb--;
	}
	free(alloc);
	return(0);

int *nbr; // for integers on *, for strings **
	size_t nmemb;
	int nb1 = 1;
	nmemb = 5;
	nbr = ft_calloc(nmemb, sizeof(int*));
	if(!nbr)
		return(1);
	nbr[0] = nb1;
	//ft_memcpy(nbr[0], &nb1, 4);

	while(nmemb--)
		printf("My func => %i\n", nbr[nmemb]);
	free(nbr);
	return(0);
} */
