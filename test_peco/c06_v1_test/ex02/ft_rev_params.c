/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:28:22 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/11 16:59:52 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;
	int	j;

	len = argc - 1;
	while (len > 0)
	{
		j = 0;
		while (argv[len][j] != '\0')
		{
			write(1, &argv[len][j], 1);
			j++;
		}
		write(1, "\n", 1);
		len--;
	}
}
