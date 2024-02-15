/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   celcius.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:35:20 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/01/25 10:47:09 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* print character passed as parameter */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	letter;

	letter = 'a';
	ft_putchar(letter);
	return (0);
}
