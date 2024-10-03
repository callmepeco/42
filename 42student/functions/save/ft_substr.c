/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:40:33 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/02 19:54:55 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*alloc;

	if(!s)
		return (NULL);
	if(ft_strlen(s) <= start)
		return(ft_strdup(""));
	if(len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	alloc = malloc(sizeof(char) * (len + 1));
	if (alloc == NULL)
		return (NULL);
	i = 0;
	alloc[len] = '\0';
	while (len--)
	{
		alloc[i] = s[start];
		i++;
		start++;
	}
	return (alloc);
}

/* int main(void)
{
	char const *s = "test.com";
	unsigned int start = 2;
	size_t len = ft_strlen(s);
	printf("%s", ft_substr(s, start, len));
} */
