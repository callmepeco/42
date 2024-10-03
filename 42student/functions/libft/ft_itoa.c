/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:31:21 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/02 18:13:00 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		len += 1;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_int_convert(long int n)
{
	char	*str;
	int		len;

	len = ft_int_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (len == 0)
		return (0);
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= (-1);
	}
	while (n > 0)
	{
		str[len - 1] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = ft_int_convert(n);
	return (str);
}

/* int	main(void)
{
	int		n;
	int		j;
	char	*str1;
	char	*str2;

	n = INT_MAX;
	j = INT_MIN;
	str1 = ft_itoa(n);
	str2 = ft_itoa(j);
	printf("%s\n", str1);
	printf("%s\n", str2);
} */
