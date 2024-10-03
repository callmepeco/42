/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:30:17 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/02 15:07:14 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
		i++;
	if (n == i)
		return (0);
	return (str1[i] - str2[i]);
}

/* int main(void)
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	printf("My func => %i\n", ft_memcmp(s, sCpy, 4));
	printf("Real func => %i\n", memcmp(s, sCpy, 4));
	write(1, "\n", 1);
	return (0);
} */
/* int main(void)
{
	char *s1 = "bacon.com";
	char *s2 = "bacon.com";
	printf("My Func => %i\n", ft_memcmp(s1, s2, 80));
	printf("Real Func => %i\n", memcmp(s1, s2, 80));
} */
