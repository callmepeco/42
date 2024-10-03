#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/* char ft_int_convert(int n)
{
	char *str;
	
	if(n > 9)
		ft_int_convert(n % 10);
	printf("test => %i\n", n);
} */
/* 
static int ft_int_len(long int n)
{
	int len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		len += 1;
		n *= -1;
	}
	while(n > 0)
	{
		n /= 10;
		len++;
	}
	return(len);
} */
/* static char *ft_int_convert(int n)
{
	char *str;
	int len;
	
	len = ft_int_len(n);
	printf("LEN => %i\n", len);
	str = malloc((len + 1)*sizeof(char *));
	if (str == NULL)
		return(NULL);
	if (len == 0)
		return(0);
	if (len > 0)
		str[len + 1] = '\0'; 
	while(len--)
	{
		str[len] = (n % 10) + 48;
		n /= 10;
		if (n < 0)
			str[0] = '-';
	}
	return(str);	
} */

/* static char *ft_int_convert(long int n)
{
	char *str;
	int len;
	
	len = ft_int_len(n);
	printf("LEN => %i\n", len);
	str = malloc((len + 1)*sizeof(char *));
	if (str == NULL)
		return(NULL);
	if (len == 0)
		return(0);
	if (len > 0)
		str[len] = '\0'; 
	while(n)
	{
		if (n < 0)
		{
			str[0] = '-';
			n *= (-1);
		}
		str[len - 1] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return(str);	
}

int main(void)
{
	int n;
	int j;
	char *str1;
	char *str2;

	n = INT_MAX;
	j = INT_MIN;
	str1 = ft_int_convert(n);
	str2 = ft_int_convert(j);

	printf("%s\n", str1);
	printf("%s\n", str2);
} */


/* #include <fcntl.h>
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
		n *= -1;
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		n += 48;
		write(fd, &n, 1);
		write(1, "\n", 1);
	}
}
int main (void)
{
	int n;

	n = 123456;
	ft_putnbr_fd(n, 1);
}
 */

/* typedef struct list
{
	int	n;
	struct list *next;
}	list;



int main(void)
{
	list head;
	list elem2;

	head = malloc(sizeof(list));
	//elem2 = malloc(sizeof(list)); 
	head.n = 5;
	elem2.n = 10;

	head.next = &elem2;
	elem2.next = NULL;
	
	
	while(head.n)
	{
		printf("%d\n", head.n);
		head = *head.next; 
	}
}
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
} */

/* typedef struct s_list
{
	void *content;
	struct s_list *next;
} 	t_list;

t_list *ft_lstnew(void *content)
{
	t_list *head;
	
	head = malloc(sizeof(t_list));
	if (head == NULL)
		return NULL;
	head->content = content;
	head->next = NULL;
	
	return head;
}

int main(void)
{
	void *smth;

	printf("Ad before: %p \n", smth);
	printf("Ad after: %p \n", ft_lstnew(smth));
	//free(smth);
	return(0);
} */
/* 
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

int main(void)
{
	t_list **lst;
	t_list *new;

	printf("Ad before: %p \n", &lst[0]);
	ft_lstadd_front(lst, new);
	printf("Ad after: %p \n", &lst[0]);

} */

/* typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
	t_list *head;
	
	head = malloc(sizeof(t_list));
	if (head == NULL)
		return NULL;
	head->content = content;
	head->next = NULL;
	
	return head;
}

t_list *ft_lstlast(t_list *lst)
{
	while(lst->next)
		lst = lst->next;
	return(lst);
}

int main(void)
{
	t_list *head = NULL;
	t_list *node = NULL;
	t_list *tail = NULL;

	head = ft_lstnew("hugo");
	node = ft_lstnew("jorge");
	head->next = node;
	tail = ft_lstlast(head);
	printf("%s", (char *)head->content);
	 free(head->content);
	free(head);
	//free(node);
	free(tail); 
} */

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;


t_list *ft_lstnew(void *content)
{
	t_list *head;
	
	head = malloc(sizeof(t_list));
	if (head == NULL)
		return NULL;
	head->content = content;
	head->next = NULL;
	
	return head;
}


t_list *ft_lstlast(t_list *lst)
{
	while(lst->next)
		lst = lst->next;
	return(lst);
}

void ft_bzero(void *s)
{
	// void *str;

	//void *str = "laele";
	//str = (char *)s;
	printf("%s\n", (char *)s);
	 //return(0);
}


void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tail;
	//malloc?

	if(lst == NULL)
		return ;
	if(*lst == NULL)
	{
		*lst = new;
		return ;
	}
	//lst->next = new;
	// printf("ZZZZ\n");
	tail = ft_lstlast(*lst); 
	tail->next = new;
}

/* void ft_lstdelone(t_list *lst, void (*del)(void*))
{

	if (!lst || !del)
		return ;
	del(lst->content);
	// printf("ZETA\n");
	free(lst);
} */
/* 
void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *cleaner;
	
	if (!lst || !del)
		return ;
	temp = *lst;
	cleaner = NULL;
	while(temp)
	{
		cleaner = temp;
		del(cleaner->content);
		free(cleaner);
		temp = temp->next;
	}
	*lst = NULL;
	
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *nodes;
	t_list *lst2;

	if(!lst)
		return ;
	lst2 = NULL;
	while(lst)
	{
		if(f)
			lst2 = ft_lstnew(f(lst->content));
		else
			lst2 = ft_lstnew(lst->content);
		if(!lst2)
		{
			ft_lstclear(&nodes, del);
			return ;
		}
		ft_lstadd_back(&lst2, nodes);
	}
	return(lst2);
} */

char *ft_substr(char const *s, unsigned int start, size_t len) 
{
	int i;
	char *alloc;
	
	alloc = malloc(sizeof(char)*(len + 1));
	if(alloc == NULL)
		return(NULL);
	i = 0;
	while(len--)
	{
		alloc[i] = s[start];
		i++;
		start++;
	}
	return(alloc);		
}

void *ft_append_strs(char *s, char c)
{
	int i;
	int start;
	int len;
	char *strs;

	i = 0;
	len = 0;
	while(s[i])
	{
		start = 0;
		len = 0;
		while(s[i] == c && s[i])
		{
			i++;
		}
		while(s[i] != c && s[i])
		{
			i++;
			len++;
		}
		start = i - len;
		strs = ft_substr(s, start, len);
		printf("%s\n", strs);
	}
	return(0);
}

int main(void)
{
	char *s = "...www.bacon...com.";
	char c = '.';

	ft_append_strs(s, c);
}
