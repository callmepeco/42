#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// allocates w/ malloc, returns array of strings, splitting s using c as delimiter
// use ft_substr or strdup (copy str and allocate with malloc)
// use ft_countwords as static 
// use ft_strchr (returns a pointer to the first c)
// function to append string to my array
// function to free

// www.bacon.com
// www..bacon...com....a..
// ....www.bacon.com....

//allocates with malloc, returns a substring from s, which begins at index start and have max size len

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

static size_t	ft_count_words(const char *s, char c)
{
	int	i;
	int	n;
	int	word;

	i = 0;
	n = 0;
	word = 0;
	if (!s)
		return (0);
	if (!s && c)
		return (1);
	while (s[i])
	{
		if (s[i] != c && word == 0)
		{
			n++;
			word = 1;
		}
		else if (s[i] == c)
		{
			word = 0;
		}
		i++;
	}
	return (n);
}
static void ft_strs_add(char *str, const char *s, int start, int len)
{
	str = ft_substr(s, start, len);
	if (str == 0)
		return ;
}
static int	ft_append_strs(char **array, const char *s, char c)
{
	int		i;
	int		j;
	int		start;
	int		len;

	i = 0;
	j = 0;
	while (s[i])
	{
		start = 0;
		len = 0;
		while (s[i] == c && s[i++])
			i;
		while (s[i] != c && s[i])
		{
			i++;
			len++;
		}
		start = i - len;
		if	(s[i])
		{
			ft_strs_add(array[j], s, start, len);
			j++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words_total;
	char	**array;

	if (s == NULL)
		return (NULL);
	words_total = ft_count_words(s, c);
	// printf("WORDS TOTAL => %zu\n", words_total);
	array = malloc(sizeof(char *) * (words_total + 1));
	if (array == NULL)
		return (NULL);
	array[words_total] = NULL;
	if (ft_append_strs(array, s, c))
	{
		while (words_total != 0)
		{
			free(array[words_total]);
			words_total--;
		}
	}
	return (array);
}
int main(void)
{
	int i = 0;
	char c = '.';
	//char *s = "www.bacon.com";
	//char *s = "www..bacon...com....a..";
	char *s = "....www.bacon.com....";
	char **array = ft_split(s, c);
	while(array[i])
	{
		printf("Strings => %s\n", array[i]);
		free(array[i]);
		i++;
	}
	free(array);
}
