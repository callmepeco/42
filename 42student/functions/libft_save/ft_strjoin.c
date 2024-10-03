/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:06:47 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/02 19:55:49 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		lentotal;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	lentotal = len1 + len2 + 1;
	dest = malloc(sizeof(char) * (lentotal));
	if (dest == NULL)
		return (NULL);
	ft_memcpy((void *)dest, s1, len1);
	ft_memcpy((void *)dest + len1, s2, len2);
	dest[len1 + len2] = '\0';
	return ((char *)dest);
}
/*  int main(void)
{
	char const *s3;
	char const s1[] = "www.";
	char const s2[] = "bacon.com";
	s3 = ft_strjoin(s1, s2);
	printf("%s", s3);
	free((char *)s3);
	return(0);
} */
