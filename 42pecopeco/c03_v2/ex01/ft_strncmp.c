/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:58:35 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/04 17:02:32 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/* int	main(void)
{
	char	*s1;
	char	*s2;

	// unsigned int	n;
	s1 = "Jorginho";
	s2 = "Jorginhoo";
	printf("%d\n\n", ft_strncmp(s1, s2, 10));
	printf("%d", strncmp(s1, s2, 10));
} */
