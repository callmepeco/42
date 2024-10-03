/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:49:20 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/04 17:08:00 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	f(unsigned int n, char *c)
{
	//char *a;

	//a = c;
	//  printf("%c\n", a);
	(void)n;
	if (*c >= 65 && *c <= 90)
		c = c + 32;
	//c = a;
	// printf("%c\n", *c);
} */

/* int	main(void)
{
	char	*s;
	//char	*dest;

	s = "JORginHo";
	ft_striteri(s, f);
	printf("%s\n",s);
} */
