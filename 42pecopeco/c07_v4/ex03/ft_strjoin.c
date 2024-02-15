/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:17:45 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/02/14 12:04:24 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// 1 - strlen
// 2 - totallen for malloc
// 3 - malloc
// 4 - strcat

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_lentotal(int size, char **strs, char *sep)
{
	int	seplen;
	int	strslen;
	int	k;

	strslen = 0;
	seplen = ft_strlen(sep) * (size - 1);
	while (size > 0)
	{
		k = ft_strlen(*strs);
		strs++;
		strslen += k;
		size--;
	}
	return (strslen + seplen);
}

char	*ft_strcat(char *str1, char *str2)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str1);
	while (str2[i] != '\0')
	{
		str1[len + i] = str2[i];
		i++;
	}
	str1[len + i] = '\0';
	return (str1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	int		lentotal;
	int		i;

	i = -1;
	if (size == 0)
	{
		temp = (char *)malloc(1);
		if (temp == NULL)
			return (NULL);
		temp[0] = '\0';
		return (temp);
	}
	lentotal = ft_lentotal(size, strs, sep);
	temp = (char *)malloc(lentotal * sizeof(char) + 1);
	if (temp == NULL)
		return (NULL);
	temp[0] = '\0';
	while (++i != size)
	{
		temp = ft_strcat(temp, strs[i]);
		if (i != size - 1)
			temp = ft_strcat(temp, sep);
	}
	return (temp);
}

/* int	main(void)
{
	int		size;
	char	*strs[4];
	char	*sep;
	char	*conc;

	strs[0] = "y uri";
	strs[1] = "peco";
	strs[2] = "oerm  sabcde";
	strs[3] = NULL;
	sep = "///";
	size = 3;
	conc = ft_strjoin(size, strs, sep);
	printf("%s", conc);
	free(conc);
	return (0);
} */
