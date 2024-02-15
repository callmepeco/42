/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:24:01 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/11 19:05:42 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	j;

	j = 0;
	while ((str1[j] == str2[j]) && str1[j] != '\0')
		j++;
	return (str1[j] - str2[j]);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	if (ft_strcmp(*str1, *str2) > 0)
	{
		temp = *str1;
		*str1 = *str2;
		*str2 = temp;
	}
}
int	main(int argc, char **argv)
{
	int	i;
	int	len;

	i = 1;
	len = argc - 1;
	while (len)
	{
		i = 0;
		while (argv[i + 1])
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i++;
		}
		len--;
	}
	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		i++;
	}
}
