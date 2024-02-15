/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:03:15 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/01 21:16:16 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 64 && str[i] < 91) && !(str[i] > 96 && str[i] < 123))
			return (0);
		i++;
	}
	return (1);
}
/* int	main(void)
{
	char a[] = "euevoceiguala42";

	printf("%d", ft_str_is_alpha(a));

	return (0);
} */