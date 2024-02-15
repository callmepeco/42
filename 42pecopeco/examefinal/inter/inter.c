#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_checkrep(char c, char *str)
{
	int	i;
	i = 0;
	// while(str[i] && str[i] != c)
	// 	i++;
	// return(i);
	while(str[i])
	{
		if (str[i] == c)
			return(1);
		i++;
	}
	return(0);

}
void	ft_strcmp(char *str1, char *str2)
{
	// char	*str3;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	char str3[256];
	while (str1[i] != '\0')
	{
		j = 0;
		while(str2[j])
		{
			if (str1[i] == str2[j])
			{
				if(ft_checkrep(str1[i], str3) == 0)
				{
					str3[k] = str1[i];
					k++;
				}
			}
			j++;
		}
		i++;
	}
	str3[k] = '\0';
	printf("%s", str3);
}
int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	ft_strcmp(argv[1], argv[2]);

}
/* while (str1[i] != str3[k] || str3[k] != '\0')
	k++;
if (str1[i] == str3[k])
	i++;
else
	str3[k] = str1[i];



--------------


		k = 0;
		while (str3[k] != '\0')
		{
			if (str1[i] == str3[k])
				i++;
			k++;
		}
		j = 0;
		while (str1[i] != str2[j] && str2[j] != '\0')
		{
			j++;
		}
		if (str1[i] == str2[j])
			{
				str3[k] = str1[i];
			}
		i++; */
