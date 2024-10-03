/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 17:00:43 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/04 17:07:21 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	unsigned int	i;
	char			*str;

	if (!f || !s)
		return (NULL);
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (s)
	{
		while (s[i])
		{
			str[i] = f(i, (char)s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

/* char	f(unsigned int n, char c)
{
	// printf("%c", c);
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
} */
/*
int	main(void)
{
	char	*s;
	char	*dest;

	s = "JORginHo";
	dest = ft_strmapi(s, f);
	printf("%s\n", dest);
} */
