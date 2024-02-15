/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:26:30 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/07 14:58:59 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	signals;
	int	number;

	signals = 1;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signals *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = ((number * 10) + (*str - 48) * signals);
		str++;
	}
	return (number);
}
/* int	main(void)
{
	printf("%d", ft_atoi("\n  +----123fabio2"));
	return (0);
} */