/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:31:17 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/04 22:37:49 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;

	i = 0;
	lendest = str_len(dest);
	lensrc = str_len(src);
	if (size == 0 || size <= lendest)
		return (lensrc + size);
	while (src[i] != '\0' && (lendest + i) < size - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}
/* int main (void)
{
	char    dest1[] = "Such a";
	char    src1[] = "Lonely day";

	printf("test 1:  %u\n\ntest 2:  %u", ft_strlcat(dest1, src1, 20),
		ft_strlcat(dest1, src1, 5));
	return(0);
} */