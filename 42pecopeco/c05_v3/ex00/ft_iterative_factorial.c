/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:05:36 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/10 23:26:23 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	nbr;

	nbr = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		nbr *= nb;
		nb--;
	}
	return (nbr);
}
/* int	main(void)
{
	int nb = 6;
	printf("%d", ft_iterative_factorial(nb));
} */