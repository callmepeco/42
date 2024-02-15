/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:23:46 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/04 22:43:34 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/* 
int	main(void)
{
	char	a[] = "haha";
	char	b[] = "hAha";

	printf("%d\n\n", ft_strcmp(a, b));
	printf("%d", strcmp(a, b));
	return (0);
} */
