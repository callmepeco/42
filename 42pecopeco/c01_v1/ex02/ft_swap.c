/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:58:22 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/01/30 19:53:42 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/* int	main(void)
{
	int	a; 
	int	b;

	a = 2;
	b = 4;
	printf("a = %d b= %d\n", a, b); // impimir antes da swap
	ft_swap(&a, &b);
	printf("a = %d b= %d", a, b);
	return (0);
}
 */