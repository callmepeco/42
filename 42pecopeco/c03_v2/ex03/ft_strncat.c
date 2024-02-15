/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:13:44 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/04 20:12:47 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ftr_len(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	lendest;

	i = 0;
	lendest = ftr_len(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[lendest] = src[i];
		i++;
		lendest++;
	}
	dest[lendest] = '\0';
	return (dest);
}
/* int	main(void)
{
	char			dest[13] = "oi";
	char			src[] = "adeus";
	unsigned int	nb;

	nb = 5;
	ft_strncat(dest, src, nb);
	printf("%s", dest);
	return (0);
}
to test line 37 printf("%c, %d <- src[i]\n", src[i], i); */