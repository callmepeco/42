/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:48:07 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/10/07 17:09:53 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_strchr(const char *str, int c) //why casting and am I moving the address correctly?
{
    char *ptr;

    ptr = (char *)str;
    while(str != 'c')
    {
        if(str == '\0')
            return(NULL);
        *str++;
    }
    return(ptr);
}

int ft_strlen(char *str)
{
    int i;
    while(str)
    {
        *str++;
        i++;
    }
    return(i);
}

void    *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc(count * size);
    if(!ptr)
        return(NULL);
    ft_bzero(ptr, count * size);
    return(ptr);
}

void    ft_bzero(void *s, size_t n)
{
    char *str;
    str = (char *)s;
    while(n--)
    {
        *str = '\0';
        *s++;
    }
}

char *ft_str_join(char *str1, char *str2)
{
    char *str3;
    char *str;
    int total_len;

    total_len = ft_strlen(str1) + ft_strlen(str2); // why strlen2 if is an empty static variable   
    str3 = malloc(total_len * sizeof(char) + 1);
    if(!str3)
        return(NULL);
    str = str3;
    while(str1)
        *str3++ = *str1++;
    while(str2)
        *str3++ = *str2++; 
    free(str1);
    return(str);
}
