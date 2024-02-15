/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:28:22 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/06 22:35:32 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;
	int	j;

	len = argc - 1; //argc sempre comeca em 1 entao temos que reduzir 1 paara argv[len] nao comecar em 4 que nao esxiste
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
/* { mine;
	int	i;
	int	j;
	int	k;

	(void)argc;
	i = 1;
	j = 0;
	k = 0;
	while (argv[i] != NULL)
	{
		i++;
	}
	while (argv[i] != argv[0])
	{
		j = 0;
		while (argv[k][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		k++;
		i--;
	}
} */
