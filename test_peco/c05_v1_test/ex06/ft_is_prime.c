/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:43:03 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/10 23:23:41 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;

	while (i <= nb / i)
	{
		if (nb % i == 0)
			return(0);
		i++;
	}
	return(1);
}
/* int	main(void)
{
	printf("%d", ft_is_prime(212524544));
	return (0);
} */