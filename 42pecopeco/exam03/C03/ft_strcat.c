int ftr_len(char *str)
{
    int len;

    len = 0;
    while(str[len] != '\0')
        len++;
    return(len);
}

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int lendest;

    i = 0;
    lendest = ftr_len(dest);
    while(src[i] != '\0')
    {
        dest[lendest] = src[i];
        i++;
        lendest++;
    }
    dest[lendest] = '\0';
    return(dest);
}