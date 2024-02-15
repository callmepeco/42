
// replace
// sort
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc != 2)
		write(1, "\n", 1);
	i = 1;
	j = 0;
	while (argv[i][j] != '\0')
	{
		if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
		{
			if (argv[i][j] > 'm')
			{
				argv[i][j] = argv[i][j] - 13;
				write(1, &argv[i][j], 1);
			}
			else if (argv[i][j] <= 'm')
			{
				argv[i][j] = argv[i][j] + 13;
				write(1, &argv[i][j], 1);
			}
		}
		else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
		{
			if (argv[i][j] > 'M')
			{
				argv[i][j] = argv[i][j] - 13;
				write(1, &argv[i][j], 1);
			}
			else if (argv[i][j] <= 'M')
			{
				argv[i][j] = argv[i][j] + 13;
				write(1, &argv[i][j], 1);
			}
		}
		else 
			write(1, &argv[i][j], 1);
		j++;
	}
	write(1, "\n", 1);
}
