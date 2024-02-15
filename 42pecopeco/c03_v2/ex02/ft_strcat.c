/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:14:02 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/04 22:38:03 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ftr_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lendest;

	i = 0;
	lendest = ftr_len(dest);
	while (src[i] != '\0')
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
	char	dest[50] = "fofinho";
	char	src[] = "Huguinho";
	

	printf("Mine:  %s\n\n", ft_strcat(dest, src));
	printf("Original:  %s", strcat(dest, src));
	return (0);
	// to test while line 37 printf("%c, %d <- src[i]\n", src[i], i);
} */
