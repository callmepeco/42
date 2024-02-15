/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:18:56 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/15 10:20:16 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == 0)
		return (-1);
	j = 0;
	while (min + j < max)
	{
		(*range)[j] = min + j;
		j++;
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
