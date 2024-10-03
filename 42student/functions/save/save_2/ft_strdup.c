/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:55:44 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/02 20:20:41 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*alloc;
	char	*str;
	int		n;

	n = (ft_strlen(s) + 1);
	alloc = malloc(sizeof(char) * (n));
	if (!alloc)
		return (NULL);
	str = ft_memcpy(alloc, s, n);
	return (str);
}
/* int main(void)
{
	const char *s = "sometimes";
	printf("My Func => %s\n", ft_strdup(s));
	printf("Real Func => %s \n", strdup(s));
	return(0);
} */
