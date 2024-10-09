/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:48:07 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/10/09 16:05:46 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char *)str;
	while (str && *str != c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (ptr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && *str)
	{
		str++;
		i++;
	}
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n--)
	{
		*str = '\0';
		str++;
	}
}

char	*ft_str_join(char *str1, char *str2)
{
	char	*str3;
	char	*str;
	int		total_len;
	int		i;

	i = 0;
	if (!str1 && str2[0] == '\0')
		return (NULL);
	total_len = ft_strlen(str1) + ft_strlen(str2);
	str3 = ft_calloc(total_len + 1, 1);
	if (!str3)
		return (NULL);
	str = str3;
	while (str1 && str1[i])
		*str3++ = str1[i++];
	i = 0;
	while (str2 && str2[i])
		*str3++ = str2[i++];
	free(str1);
	return (str);
}
