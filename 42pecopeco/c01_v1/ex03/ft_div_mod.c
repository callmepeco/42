/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:12:37 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/01/30 19:56:00 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* int	main(void)
{
     int a;
     int b;
     int div;
     int mod;

 	a = 153;
 	b = 5;

 	ft_div_mod(a, b, &div, &mod);
 	printf("resultado da divisao: %d\n", div);
 	printf("resto da divisao: %d\n", mod);
} */
