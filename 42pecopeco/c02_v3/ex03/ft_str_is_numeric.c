/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:07:38 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/01 21:17:59 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 47 && str[i] < 58))
			i++;
		else
			return (0);
	}
	return (1);
}
/* int	main(void)
{
	char a[] = "12334h2";
	printf("%d", ft_str_is_numeric(a));
	return (0);
} */