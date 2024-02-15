int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
void	ft_sort_strings(int arg_num, char *str[])
{
	char	*temp;
	int		arg_count;
	int		j;

	arg_count = 1;
	while (arg_count < arg_num)
	{
		j = arg_count;
		while (j > 0 && ft_strcmp(str[j - 1], str[j]) > 0)
		{
			temp = str[j - 1];
			str[j - 1] = str[j];
			str[j] = temp;
			j--;
		}
		arg_count++;
	}
}
int	main(int argc, char *argv[])
{
	int i;
	int j;
	ft_sort_strings(argc - 1, argv + 1);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}