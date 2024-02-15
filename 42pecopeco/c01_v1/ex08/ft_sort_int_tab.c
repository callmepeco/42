/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:41:22 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/01/30 20:13:57 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	f;
	int	count;

	i = 0;
	f = size - 1;
	count = 0;
	while (count < f)
	{
		i = 0;
		while (i < f)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		count++;
	}
}
/* int	main(void)
{
	int tab[] = {2, 9, 3, 1, 4, 7, 5};
	int size;
	int i;

	i = 0;
	size = 7;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
} */