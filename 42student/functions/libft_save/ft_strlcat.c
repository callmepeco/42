/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:06:56 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/04 17:28:19 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	lendst;
	unsigned int	lensrc;
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src) + size);
	lendst = 0;
	lensrc = ft_strlen(src);
	i = 0;
	while (dst[lendst] && lendst < size)
		lendst++;
	len = lendst + lensrc;
	if (size > lendst)
	{
		while (src[i] && lendst < size - 1)
		{
			dst[lendst] = src[i];
			i++;
			lendst++;
		}
		dst[lendst] = '\0';
	}
	return (len);
}
/* int main(void)
{
		char *dest;
		dest[10] = 'a';
		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
		return(0);
} */
