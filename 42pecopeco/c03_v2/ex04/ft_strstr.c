/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:43:49 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/04 22:37:54 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
/* int	main(void)
{
	char str1[] = "asvezesnosilenciodanoite";
	char to_find1[] = "silencio";

	char str2[] = "asvezesnosilenciardanoite";
	char to_find2[] = "silencio";

	printf("%s \n \n ", ft_strstr(str1, to_find1));
	printf("%s \n \n ", ft_strstr(str2, to_find2));
	return (0);
} */