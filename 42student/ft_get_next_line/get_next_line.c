/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:48:34 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/10/09 16:06:24 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_find_line(int fd, char *buffer)
{
	char	*temp;
	int		text_len;

	temp = NULL;
	text_len = 1;
	while (text_len > 0)
	{
		if (!*buffer)
			text_len = read(fd, buffer, BUFFER_SIZE);
		if (text_len == -1)
		{
			free(temp);
			return (NULL);
		}
		temp = ft_str_join(temp, buffer);
		if (!temp)
			return (NULL);
		if (ft_strchr(temp, '\n'))
			break ;
		ft_bzero(buffer, BUFFER_SIZE);
	}
	return (temp);
}

char	*ft_get_line(char *text, char *buffer)
{
	int		i;
	int		j;
	char	*line;
	int		tot;

	i = 0;
	tot = 0;
	while (text[i] && text[i] != '\n')
		i++;
	line = ft_calloc((i + 2), sizeof(char));
	i = 0;
	j = 0;
	while (text[i])
	{
		if (!tot)
		{
			line[i] = text[i];
			if (text[i] == '\n')
				tot = 1;
		}
		else
			buffer[j++] = text[i];
		i++;
	}
	return (ft_bzero(buffer + j, BUFFER_SIZE - j), free(text), line);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*text;
	char		*line;

	text = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	text = ft_find_line(fd, buffer);
	if (!text)
		return (NULL);
	line = ft_get_line(text, buffer);
	return (line);
}
/*
int	main(void)
{
	char	*dest;
	int		fd;

	fd = open("file.txt", O_RDONLY);
	dest = get_next_line(fd);
	printf("%s", dest);
	free(dest);
	dest = get_next_line(fd);
	printf("%s", dest);
	free(dest);
	dest = get_next_line(fd);
	printf("%s", dest);
	free(dest);
	dest = get_next_line(fd);
	printf("%s", dest);
	free(dest);
	dest = get_next_line(fd);
	printf("%s", dest);
	free(dest);
	dest = get_next_line(fd);
	printf("%s", dest);
	free(dest);
	close(fd);
} */
