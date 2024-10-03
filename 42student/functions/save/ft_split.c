/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:53:31 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/04 16:56:47 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_append_strs(char **array,  const  char *s, char c)
{
	int		j;
	int		len;
	char	*strs;

	j = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (s[len] != c && s[len])
			len++;
		if (len && *s && array)
		{
			strs = ft_substr(s, 0, len);
			if (strs == 0)
				return (-1);
			array[j] = strs;
		}		
		j += (len > 0);
		s += len;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t	words_total;
	char	**array;

	if (s == NULL)
		return (NULL);
	words_total = ft_append_strs(NULL, s, c);
	array = malloc(sizeof(char *) * (words_total + 1));
	if (array == NULL)
		return (NULL);
	array[words_total] = NULL;
	if (ft_append_strs(array, s, c) == -1)
	{
		while (words_total >= 0)
		{
			free(array[words_total]);
			words_total--;
		}
	}
	return (array);
}
/* int main(void)
{
	int i = 0;
	char c = '.';
	char *s = "............";
	//char *s = "www..bacon...com....a..";
	//char *s = "....www.bacon.com....";
	char **array = ft_split(s, c);
	while(array[i])
	{
		printf("Strings => %s\n", array[i]);
		free(array[i]);
		i++;
	}
	free(array);
} */
