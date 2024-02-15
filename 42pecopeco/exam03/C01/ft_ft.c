#include <stdio.h>

void    ft_ft(int *ptr)
{
    *ptr = 42;
}
int main(void)
{
    int *ptr;
    int nbr;

    nbr = 69;
    ptr = &nbr;

    ft_ft(ptr);
    printf("%d", *ptr);
    return(0);

}