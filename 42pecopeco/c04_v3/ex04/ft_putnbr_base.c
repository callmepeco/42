/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:03:19 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/13 23:53:10 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_len(char *len)
{
	int	i;

	i = 0;
	while (len[i] != '\0')
		i++;
	return (i);
}

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while ((base[i] != '\0') && (base[i] != '+') && (base[i] != '-'))
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

void	ft_baseconv(char *base, int nbr)
{
	int		baselen;
	long	number;

	number = nbr;
	baselen = ft_len(base);
	if (number >= baselen)
	{
		ft_baseconv(base, number / baselen);
	}
	write(1, &base[number % baselen], 1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_checkbase(base) != 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;	
		}
		ft_baseconv(base, nbr);
	}
}
int	main(void)
{
	int		nbr;
	char	*binary;
	char	*numbers;
	char	*hexadecimal;
	char	*octal;

	nbr = 7897981;
	binary = "01";
	numbers = "0123456789";
	hexadecimal = "0123456789ABDCEF";
	octal = "poneyvif";
	printf("Binary: \n\n");
	ft_putnbr_base(nbr, binary);
	printf("\n\nNumbers: \n\n");
	ft_putnbr_base(nbr, numbers);
	printf("\n\nHexadecimal: \n\n");
	ft_putnbr_base(nbr, hexadecimal);
	printf("\n\nOctal: \n\n");
	ft_putnbr_base(nbr, octal);
	return (0);
}
