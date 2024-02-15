/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:28:27 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/01 21:19:38 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123 && str)
			i++;
		else
			return (0);
	}
	return (1);
}
/* int	main(void)
{
	char	a[] = "ehaehuea1Ahea";

	printf("%d", ft_str_is_lowercase(a));
	return (0);
} */
