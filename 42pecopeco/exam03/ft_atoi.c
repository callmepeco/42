int ft_atoi(char *str)
{
    int signals;
    int number;

    signals = 1;
    number = 0;

    while((*str >= 9 && *str <= 13) || *str == 32)
        str++;
    while(*str == '+' || *str == '-')
    {
        if (*str == '-')
            signals *= -1;
        str++;
    }
    while(*str >= '0' && *str <= '9')
    {
        number = ((number * 10) + (*str - 48) * signals);
        str++;
    }
    return(number;)
}