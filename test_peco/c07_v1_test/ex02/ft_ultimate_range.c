/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:18:56 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/13 22:47:36 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	j = max - min;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	i = j;
	*range = (int *)malloc(i * sizeof(int));
	if (!range)
	{
		*range = (NULL);
		return (-1);
	}
	while (--i)
	{
		(*range)[i] = max;
		max--;
	}
	return (j);
}
/* int	main(void)
{
	int	i;
	int	size;
	int	*range;

	size = ft_ultimate_range(&range, 1, 5);
	i = 0;
	while (i < size)
	{
		printf("%i\n", range[i]);
		i++;
	}
	free(range);
	return (0);
} */
