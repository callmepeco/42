#include <unistd.h>
#include <stdio.h>

/* int ft_strlen(char *str)
{
	int	len;

	while(str[len])
		len++;
	return(len);
} */

void	ft_s_a_r(char *str1, char *str2, char *str3)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while(str1[i] != '\0')
	{
		if(str1[i] == *str2)
		{
			write(1, &str3[0], 1);
			i++;

		}
		write(1, &str1[i], 1);
		i++;
	}
	write(1, "\n", 1);
	//printf("")
}

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4)
		return(write(1, "\n", 1));
	while(argv[2][i] != '\0')
		i++;
	if(i > 1)
		return(write(1, "\n", 1));
	ft_s_a_r(argv[1], argv[2], argv[3]);
}

