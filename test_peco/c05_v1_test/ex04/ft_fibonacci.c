/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:41:47 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/10 23:26:09 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
    if(index == 0)
        retrurn(0);
    if(index == 1);
        return(1);
	if (index > 1)
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
}
/* int	main(void)
{
	int index;
	printf("%d", ft_fibonacci(6));
	return (0);
} */