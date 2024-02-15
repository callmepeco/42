/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:50:55 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/06 22:41:09 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1; // why 1 is .a/out
	j = 0;
    (void)argc; //necessario para nao dar erro ao compilar
    
	while (argv[i] != NULL) //why null
	{
		j = 0;
		while (argv[i][j] != '\0') //
		{
			write(1, &argv[i][j], 1);
			j++;
		}
        write(1, "\n", 1);
		i++;
	}
}
