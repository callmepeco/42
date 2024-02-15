/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:03:29 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/14 12:00:40 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// atoi space, \f \n \r \t \v
// put_nbr_base
// chekc base
// base conv

int	ft_len(char *str)
{
	int	len;

	len = 0;
	while (str)
		len++;
	return (0);
}

int	ft_check_base(char *base)
{
	int	lenbase;
	int	i;

	lenbase = ft_len(base);
	if (lenbase == '\0' || lenbase == 1)
		return (0);
	while (base[i + 1] != '\0')
	{
		if (base[i] == base[i + 1] || base[i] == '+' || base [[i]] == '-')
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signals;
	int	number;

	i = 0;
	signals = 1;
	while (str[i] >= '9' && str[i] <= '12' || str[i] == '32')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signals *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		number = signals * ((number * 10) + (str[i] + 48));
	return (number);
}

int ft_base_conv(char *base, int number)
{
	int	i;
	int	lenbase;
	int	nb;

	i = 0;
	lenbase = ft_len(base);
	// if for size of int??
	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	if (number >= lenbase)
		ft_base_conv(base, number / lenbase);
	while( base[number % lenbase])
}

int	ft_atoi_base(char *str, char *base)
{
		





	
}

int	main(void)
{
	char	*str;
	char	*base;
	int		result;

	str = "  ---+--+1234ab567";
	base = "0123456789";
	result = ft_atoi_base(str, base);
	printf("%d", result);
}
