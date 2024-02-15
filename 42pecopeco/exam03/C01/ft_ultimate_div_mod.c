/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:36:35 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/08 23:50:08 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
int	main(void)
{
	int i;
	int j;

	i = 43;
	j = 3;
	ft_ultimate_div_mod(&i, &j);
		//& here is taking what is in the address of i and J
	printf("result div: %d\n", i);
	printf("rem div: %d", j);
}