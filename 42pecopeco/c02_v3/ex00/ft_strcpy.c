/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:11:04 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/02 12:12:45 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* int	main(void)
{
	char	a[] = "bom dia";
	char	b[] = "boa noite";

	printf("dest: %s\nsrc: %s\n", a, b);
	ft_strcpy(a, b);
	printf("dest: %s\nsrc: %s", a, b);
	return (0);
}
 */