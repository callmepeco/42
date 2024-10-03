#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//#include "libft.h"
/* #include <stddef.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *strdest;
	const char *strsrc;
	char *re;
	
	strdest = (char *)dest;
	strsrc = (const char *)src;
	re = strdest;
	while(n-- && strsrc)
		*strdest++ = *strsrc++;
	return(re);
}
int main(void)
{
	char src[10] = "make";
	ft_memcpy(src + 2, src, 6);
	printf("My Func => %s\n", src);
	char src2[10] = "make";
	memcpy(src2 + 2, src2, 6); //weird behavior, shouldnt avoid overlap
	printf("Real Fun => %s \n", src2);
	//printf("%s", src);
	
} */

/* int ft_count_letters(char *str, char c)
{
	char *temp;
	int i;
	int j;

	while(str[i])
	{
		if (str[j] == c && str[j + 1] != c && str[j + 1] != '\0')
			temp = strchr(str, c);
	}


} */


int ft_count_words(char *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(*str && *str != c)
		i = 1;
	while(str[j])
	{
		//i = 1;
		if (str[j] == c && str[j + 1] != c && str[j + 1] != '\0')
			i++;
		j++;
		//printf("%i", i);
	}
	return(i);
}

/* static int ft_len_strs(char *str, char c)
{
	int n;
	int i;
	int j;
	
	i = 0;
	j = 0;
	n = ft_count_words(str, c);
	if(n > 0)
	{		
		while(str[j++])
		{
			if (str[j] == c && str[j + 1] != c && str[j + 1] != '\0') // if I find a delimiter
				j++;
			i++;
			//j++;
		}
	}
	return(i);
} */
/* size_t ft_strlen(const char *str)
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

char	*ft_strchr(const char *s, int c)
{
	// char *temp;
	// if(c)
	while (s++)
	{
		if (*s == (char)c) // casting since it says c has to be a character
			return ((char *)s);
	}
	return (0);
}
static char **ft_str_add(char *str, char c) // allocate memory and add strs to my new array of strs
{
	char **array;
	char *temp;
	int n;
	int i;
	int j;
	
	n = ft_count_words(str, c);
	// printf("%i\n\n", n);
	array = malloc((n + 1)*sizeof(char*));
	if(array == NULL)
		return(NULL);
	// preciso de um loop iterando str por str para dar free em caso de erro
	i = 1;
	j = 0;
	while(str[j++])
	{
		if (str[j] == c && str[j + 1] != c && str[j + 1])
		{
			temp = ft_strchr(str + j, c) + 1; //com strchr eu nao estou limitando as strs
			array[i] = temp;
			//printf("Strs => %s\n", array[i]);
			i++;

		}
	}
	return(array);
}

int main(void)
{
	char *str = "www.bacon.com";
	char c = '.';
	char **array;

	array = ft_str_add(str, c);
	//printf("Words Count => %i\n", ft_count_words(str, c));
	printf("str0 => %s\n", array[0]);
	printf("str1 =>%s\n", array[1]);
	printf("str2 => %s\n", array[2]);
	printf("str3 => %s\n", array[3]); 
	return(0);
} */

typedef struct s_list
{
	void *content;
	struct s_list *next;
} 	t_list;

void ft_test_func(void *s)
{
	printf("%s\n", (char *)s);
} 

t_list *ft_lstnew(void *content)
{
	t_list *head;

	head = NULL;
	
	head = malloc(sizeof(t_list));
	if (head == NULL)
		return NULL;
	head->content = content;
	head->next = NULL;
	
	return head;
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	//t_list *cleaner;
	
	if (!lst || !del) //*lst
		return ;
	//cleaner = temp;
	while(*lst)
	{
		//printf("%s\n", (char *)cleaner->content);
		temp = *lst;
		del(temp->content);
		*lst = temp->next;
		free(temp);
	}
}

int main(void)
{
	t_list *lst1;
	t_list *lst2;
	t_list *lst3;

	lst1 = ft_lstnew("tst");
	lst2 = ft_lstnew("laele2");
	lst3 = ft_lstnew("laele3");
	lst1->next = lst2;
	lst2->next = lst3;
	
	ft_lstclear(&lst1, ft_test_func);
	printf("%s", (char *)lst1->content);
}
