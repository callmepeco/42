/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:39:49 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/02 19:33:42 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*strdest;
	const char	*strsrc;
	char		*temp;

	strdest = (char *)dest;
	strsrc = (char *)src;
	temp = strdest;
	if(dest == src)
		return(NULL);
	if (src > dest)
	{
		ft_memcpy(strdest, strsrc, n);
		return (temp);
	}
	while (n > 0)
	{
		strdest[n - 1] = strsrc[n - 1];
		n--;
	}
	return (temp);
}

/* int main(void)
{
	char		src[20] = ".com";
	char		dest[20] = "www.bacon";
	char		src2[20] = ".com";
	char		dest2[20] = "www.bacon";
	char		src[10] = "make";
	char		src2[10] = "make";
	char		*strdest;
	const char	*strsrc;
	char		*re;

	printf("My Func => %s\n", (char *)ft_memmove(src, dest, 10));
	printf("Real Func => %s\n", (char *)memmove(src2, dest2, 10)); */
/* 	OVERLAP TEST
	ft_memcpy(src + 2, src, 6);
	printf("My Func => %s\n", src);
	memcpy(src2 + 2, src2, 6); //weird behavior, shouldnt avoid overlap
	printf("Real Fun => %s \n", src2);
} */
/* #include <stddef.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	strdest = (char *)dest;
	strsrc = (const char *)src;
	re = strdest;
	while(n--)
		*strdest++ = *strsrc++;
	return(re);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[100] = "Learningisfun";
	char str2[100] = "Learningisfun";
	char *first, *second;
	char *third, *fourth;
	first = str;
	second = str;
	third = str2;
	fourth = str2;
	printf("Original string :%s\n ", str);
	printf("Original string :%s\n ", str2);

	when overlap happens then it just ignore it
	printf("before memcpy: %c\n", *(first + 8));
	memcpy(first + 8, first, 10);
	printf("memcpy overlap : %s\n ", str);

	when overlap it start from first position
	printf("before memmove: %c\n", *(second + 8));
	ft_memcpy(second + 8, first, 10);
	memcpy(fourth + 8, third, 10);
	printf("memmove overlap : %s\n ", str);
	printf("memmove2 overlap : %s\n ", str2);

	return (0);
} */
