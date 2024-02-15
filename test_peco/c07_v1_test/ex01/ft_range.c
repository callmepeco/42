/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:15:37 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/13 22:44:30 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (NULL);
	i = 0;
	while (min != max)
	{
		min++;
		i++;
	}
	array = (int *)malloc(i * sizeof(int));
	if (!array)
		return (NULL);
	while (i-- != 0)
	{
		max--;
		array[i] = max;
	}
	return (array);
}

/* int	main(void)
{
	int range;

	range = 1000;
	// int array[] = {10, 11, 12, 13, 14, 15};
	for (int i = 0; i < range; i++)
		printf("%d\n", ft_range(0, 12345676)[i]);
	return (0);
} */
