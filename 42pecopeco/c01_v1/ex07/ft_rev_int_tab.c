/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:30:03 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/01/30 20:05:02 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	f;

	i = 0;
	f = size - 1;
	while (i < f)
	{
		temp = tab[i];
		tab[i] = tab[f];
		tab[f] = temp;
		i++;
		f--;
	}
}
/* int	main(void)
{
	int tab[] = {2, 4, 6, 8, 9};
	int size;
	int i;

	i = 0;
	size = 5 ;
	while (i < size)
    {
	    printf("%d", tab[i]);
        i++;
    }
    i =0;
    printf("\n");
    ft_rev_int_tab(tab, size);
    while (i < size)
    {
		printf("%d", tab[i]);
        i++;
    }
} */