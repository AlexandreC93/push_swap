/*
int	*sort(char **av, int first, int last, int ac)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = first;
	printf("[%c]-[%c]\n", first, last);
	while (i < ac)
	{
		if (*av[i] <= av[ac])
		{
			tmp = *av[i];
			*av[i] = *av[ac];
			*av[ac] = tmp;
		}
	}
}

int	push_swap(int ac, char **av)
{
	printf("%d", ac);
	if (ac <= 100)
		sort(av, av[1][0], av[1][ac], ac);
}
*/
int	main(int ac, char **av)
{
	int		i;

	i = 0;
	while (ac)
	{
		printf("%s\n", av[i]);
		if ()
		ac--;
		i++;
	}
		return (0);
}
