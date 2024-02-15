/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:23:41 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/09 10:04:00 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}
int	ft_strcmp(char *gui, char *peco)
{
	int	i;

	i = 0;
	while ((gui[i] == peco[i]) && (gui[i] != '\0' || peco[i] != '\0'))
		i++;
	return (gui[i] - peco[i]);
}
void	ft_swap(char **coca, char **fanta)
{
	char	*copovazio;

	copovazio = *fanta;
	*fanta = *coca;
	*coca = copovazio;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[j + 1] != 0)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		ft_putstr(argv[i]);
		i++;
	}
}

/* while (argv[k][j] != '\0')
{
	if (argv[i][j] > argv[k][j])
	{
		ft_swap(&argv[i][j], &argv[k][j]);
	}
	write(1, &argv[i][j], 1);
	j++;
}
write(1, "\n", 1);
if (argv[k + 1] == 0)
	write(1, argv[k], j);
k++;
i++; */