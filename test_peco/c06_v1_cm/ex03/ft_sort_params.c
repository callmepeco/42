/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:23:41 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/06 23:28:08 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
  /*   int size; */
	char str;

	i = 1;

	while (i < argc)
	{
		while (argv[i] != NULL)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] > argv[i][j + 1] && argv[i][j + 1] != '\0')
				{
					str = argv[i][j + 1];
					argv[i][j + 1] = argv[i][j];
					argv[i][j] = str;
				}
				j++;
				write(1, &argv[i], j);
			}
			i++;
			write(1, "\n", 1);
		}
	}   
}