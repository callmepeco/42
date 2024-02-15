#include <stdio.h>

void ft_swap(int *nbr1, int *nbr2)
{
    int a;

    a = *nbr1;
    *nbr1 = *nbr2;
    *nbr2 = a;
}
int main(void)
{
    int nbr1 = 42;
    int nbr2 = 69;

    ft_swap(&nbr1, &nbr2);
    printf("%d\n\n", nbr1);
    printf("%d", nbr2);
}