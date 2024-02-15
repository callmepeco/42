#include <stdio.h>

int    ft_intswap(int **ptr, int number)
{
    // int temp;

    // temp = **ptr + number;
    // **ptr = temp;
    **ptr += number;
    return(**ptr);
}






int main (void)
{
    int *value = 1;
    int *a = &value;
    int **b = &a;
    ft_intswap(&*b, 45);
    printf("%d", **b);
}