#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_last_word(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = len - 1;
	while (str[i] == 32 || str[i] == 9)
		i--;
	while (str[i] != 32 && str[i] != 9)
	{
		i--;
		//printf("%c", str[i]);
	}
	i++;
	while ((str[i] != 32 && str[i] != 9) && str[i])
	{
		// printf("%c", str[i]);
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

// 	while (str[i] == 32 || str[i] == 9)
// 	{
// 		i++;
// 		write(1, &str[len + i], 1);
// 	}
// }

int	main(int argc, char **argv)
{
	if (argc != 2)
		{
			write(1, "\n", 1);
			return(0);
		}
	ft_last_word(argv[1]);
}
