/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:40:12 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/10 21:11:48 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}

/* int main(void)
{
	int nb;
	nb = 6;
	printf("%d", ft_recursive_factorial(nb));
	return(0);
} */