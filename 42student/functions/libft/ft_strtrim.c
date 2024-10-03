/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 22:23:53 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/02 20:18:59 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1)
		return (NULL);
	start = 0;
	while (ft_char_in_set(s1[start], set) && s1[start])
		start++;
	end = ft_strlen(s1) - 1;
	while (ft_char_in_set(s1[end], set) && (end >= start))
		end--;
	len = end - start + 1;
	temp = ft_substr(s1, start, len);
	return (temp);
}

/* int main(void)
{
	char const *s1 = "bAaLOLbAa";
	char const *set = "bAa";

	printf("%s", ft_strtrim(s1, set));
	return(0);
} */

/* {
	char *dest;
	int lens1;
	int lenset;
	int i;

	lens1 = ft_strlen(s1);
	lenset = ft_strlen(set);
	i = 0;
	while(set[i])
	{
		if(set[i] == s1[i])
			i++;
		printf("LOOP1 => %c\n", s1[lens1]);
		if(set[lenset] == s1[lens1])
		{
			lenset--;
			printf("S1 => %c\n", s1[lens1]);
			lens1--;
			printf("LEN => %i\n", lens1);
		}
	}
	dest = malloc(sizeof(char)*(lens1 + 1));
	if(dest == NULL)
		return(NULL);
	while(i != lens1)
	{
		dest[lens1] = s1[lens1];
		printf("LOOP2 => %s\n", dest);
		lens1--;
	}
	return(dest);
} */
