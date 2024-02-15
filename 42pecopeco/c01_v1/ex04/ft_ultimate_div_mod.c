/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:50:26 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/01/30 21:06:47 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res;

	res = *a;
	*a = *a / *b;
	*b = res % *b;
}


int	main(void)
{
	int	i;
	int	j;

	i = 43;
	j = 3;
	ft_ultimate_div_mod(&i, &j); //& here is taking what is in the address of i and J
	printf("result div: %d\n", i);
	printf("rem div: %d", j);
} 
