#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
/* 	if (n == 0)
		return (NULL); */
	if ((unsigned char)c == 0)
		return ((unsigned char *)s);
	while (i != n)
	{
		if ((unsigned char)c == ((unsigned char *)s)[i])
			return ((unsigned char *)s + i);
		i++;
	}
	return ("FAIL");
}
int main(void)
{
	char *s = "bonjour";
	int c = 'b';
	size_t n = 4;
	printf("%s", (unsigned char*)ft_memchr(s, c, n));
}
