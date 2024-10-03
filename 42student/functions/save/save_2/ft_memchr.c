/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:57:56 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/02 19:36:12 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == ((unsigned char *)s)[i])
			return ((unsigned char *)s + i);
		i++;
	}
	return (0);
}
/* int main(void)
{
	char *s = "bonjour";
	int c = 'b';
	size_t n = 4;
	printf("%s", ft_memchr(s, c, n));
} */
