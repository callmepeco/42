/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:31:44 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/04 17:05:15 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*strdest;
	const char	*strsrc;
	char		*re;

	if (dest == src)
		return (NULL);
	strdest = (char *)dest;
	strsrc = (const char *)src;
	re = strdest;
	while (n--)
		*strdest++ = *strsrc++;
	return (re);
}

/* int main(void)
{
	char src[10] = "make";
	ft_memcpy(src + 2, src, 6);
	printf("My Func => %s\n", src);
	char src2[10] = "make";
	memcpy(src2 + 2, src2, 6); //weird behavior, shouldnt avoid overlap
	printf("Real Fun => %s \n", src2);
	//printf("%s", src);

} */
