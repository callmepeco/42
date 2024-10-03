/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:16:28 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/02 17:38:27 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	signals;
	int	number;
	int	i;

	i = 0;
	signals = 1;
	number = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			signals *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		number = ((number * 10)) + (*nptr - 48) * signals;
		nptr++;
	}
	return (number);
}

/* int main(void)
{
	char *nptr = "    \t\v\n\v\f\r+469";
	printf("My Func => %d\n", ft_atoi(nptr));
	printf("Real Func => %d\n", atoi(nptr));
} */
