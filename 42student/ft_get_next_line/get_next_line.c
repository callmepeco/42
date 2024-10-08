/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:48:34 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/10/08 16:18:19 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_find_line(int fd, char *buffer)
{
    char *temp;
    int text_len;

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
        temp = ft_str_join(buffer, temp);
        if (ft_strchr(temp, '\n'))
            break;
    }
    return (temp);
}

char *ft_get_line(char *text, char *buffer)
{
    int 	i;
    int     j;
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
			break;
		}
    }
    j =0;
    while(text && text[++i])
    {
        buffer[j++] = text[i];
        buffer[i]= 0;
    }
    return(free(text),line);
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
    // free(text);
    return (line);
}

int main(void)
{
    char *dest;
	int fd = open("file.txt", O_RDONLY);
	printf("fd = %d\n", fd);
    dest = get_next_line(fd);
    printf("%s", dest);
    free(dest);
    close(fd);
}
