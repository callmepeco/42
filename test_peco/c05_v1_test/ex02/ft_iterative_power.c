/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:56:14 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/10 21:11:59 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if ((nb == 0 & power == 0) || power == 0)
		return (1);
	while (power != 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}

/* int	main(void)
{
	int nb = 456;
	int power = 3;

	printf("%d", ft_iterative_power(nb, power));
	return (0);
} */