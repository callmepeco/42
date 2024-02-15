/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:15:37 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/14 11:26:19 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = max - min;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(i * sizeof(int));
	if (!array)
		return (NULL);
	while (i > 0)
	{
		i--;
		max--;
		array[i] = max;
	}
	return (array);
}
/* 
int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;

	min = 5;
	max = 10;
	range = ft_range(min, max);
	if (range != NULL)
	{
		i = 0;
		while (range[i])
		{
			printf("%i\n", range[i]);
			i++;
		}
		free(range);
	}
} */
