/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:40:18 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/10 23:25:26 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb > 214739716)
		return (0);
	if (nb == 2)
		return (0);
	i = 2;
	while (i * i <= nb)
    {
       if (i * i == nb)
            return(i);
        i++;      
    }
	return (0);
}

/* int	main(void)
{
	int	nb;

	nb = 65536;
	printf("%d", ft_sqrt(nb));
} */