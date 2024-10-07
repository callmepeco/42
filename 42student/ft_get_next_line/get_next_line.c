/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:48:34 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/10/07 17:34:00 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_find_line(int fd, char *buffer)
{
    char *temp;
    size_t text_len;

    temp = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if(temp == NULL)
		return(NULL);
    text_len = 1;
    while (text_len > 0)
    {
        text_len = read(fd, temp, BUFFER_SIZE);
        if (text_len == -1)
        {
            free(temp);
            return (NULL);
        }
        temp[text_len] = '\0';
        temp = ft_str_join(temp, buffer);
        if (ft_strchr(temp, '\n'))
            break;
    }
    return (temp);
}

char *ft_get_line(char *text, char *buffer)
{
    int 	i;
    char 	*line;

    i = 0;
    while(text[i] && text[i] != '\n')
        i++;
    line = ft_calloc((i + 2), sizeof(char));
    i = 0;
    while(text[i])
    {
		line[i] = text[i];
		if (text[++i] == '\n')
		{
			line[i] = text[i];
			line[++i] = '\0';
			break;
		}
    }
	i = 0;
	while(buffer[i] && buffer[i - 1] != '\n')
		buffer[i++] = '\0';
	buffer = buffer + i;
	free(text);
    return(line);
}

char *get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE + 1];
	char *text;
    char *line;

	text = NULL;
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    text = ft_find_line(fd, buffer);
	if (!text)
		return(NULL);
    line = ft_get_line(text, buffer);
    return (line);
}

int main(void)
{
	int fd = open("peco.txt", O_RDONLY);
	printf("fd = %d\n", fd);
}
