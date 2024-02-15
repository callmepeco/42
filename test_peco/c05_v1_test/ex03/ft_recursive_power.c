/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:07:09 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/10 21:12:15 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb < 0)
		return (0);
	if (nb == 0 && power == 0 || power == 0)
		return (1);
	if (power != 1)
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

/* int	main(void)
{
	int nb = 0;
	int power = 0;

	printf("%d", ft_recursive_power(nb, power));
	return (0);
} */