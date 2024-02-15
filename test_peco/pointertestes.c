#include <stdio.h>
#include <stdlib.h>

/* int	main(void)
{
	int	*p;
	int	**p2;
	int	a;
	int	p2[] = {10, 20, 30};
	int	*p;
	int	*range;

	a = 1;
	p = &a;
	p2 = &p;
	**p2 = 5;
	printf("%d", a);
} */
int	main(void)
{
	// int *p;
	p = (int *)malloc(sizeof(int) * 3);
	for (int i = 0; i < 3; i++)
	{
		p[i] = p2[i];
	}
	// p[] = {0, 1, 2, 3, 4, 5};
	for (int i = 0; i < 3; i++)
		printf("%d\n", p[i]);
}

{
    char	str[] = "aaaaa";
    char	str1[1] (point+1) = "baaaa";
    char	str2[] = "xaaaa";
}

int	main(char **argv)

{{\0}}