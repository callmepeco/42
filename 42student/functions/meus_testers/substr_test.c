#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

size_t ft_strlen(const char *str)
{
	int n;
	
	n = 0;
	while(*str)
	{
		n++;
		str++;
	}
	return(n);
}

char *ft_substr(char const *s, unsigned int start, size_t len) 
{
	int i;
	char *alloc;
	
	alloc = malloc(sizeof(char)*(len + 1));
	if(alloc == NULL)
		return(NULL);
	i = 0;
	alloc[len] = '\0';
	while(len--)
	{
		alloc[i] = s[start];
		i++;
		start++;
	}
	return(alloc);		
}

int main(void)
{
	char const *s = "test.com";
	char *str;
	unsigned int start = 2;
	size_t len = ft_strlen(s);
	str = ft_substr(s, start, len);
	printf("%s", str);
	free(str);

}
