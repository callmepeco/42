

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s1[] = "0123456";
	char	*s2;

	s2 = s1 + 2;
	printf("%p\n", s1);
	printf("%p\n", s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", (char *)memcpy(s2,s1,8));
	return (0);
}

/* int	main(void)
{
	char	s1[] ="0123456";
	char	*s2;

	s2 = s1 + 2;
	printf("%p\n", s1);
	printf("%p\n", s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", (char *)ft_memcpy(s2,s1,8));
	return (0);
} */
