#include <unistd.h>

void	ft_putstr(int nbr)
{
	if (nbr > 9)
		ft_putstr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

void	ft_fizzbuzz(int nbr)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 9);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putstr(i);
		i++;
		write(1, "\n", 1);
	}
}
int	main(void)
{
	int	nbr;

	nbr = 1;
	ft_fizzbuzz(nbr);
	return (0);
}
