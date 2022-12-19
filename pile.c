#include "libft/libft.h"
#include "push_swap.h"

t_p	pile_alloc(int size)
{
	t_p		pile;

	pile.nbr = (int*)malloc(sizeof(int) * size);
	pile.size = size;
	return (pile);
}

t_p	pile_init(char **av)
{
	int		i;
	int		t;
	t_p		pile;

	t = 1;
	while ((av[t] && av[t][0] == '-') || (!(ft_strcmp(av[t], "--"))))
	{
		if (ft_isdigit(av[t][1]))
			break;
		t++;
	}
	i = t;
	while (av[i])
		i++;
	pile = pile_alloc(i - t);
	pile_fill(&pile, av);
	return (pile);
}

void	pile_fill(t_p *p, char **list)
{
	int		*tmp;
	int		i;

	i = 1;
	tmp = p->nbr;
	while ((list[i] && list[i][0] == '-') || !ft_strcmp(list[i], "--"))
	{
		if (ft_isdigit(list[i][1]))
			break;
		i++;
	}
	while (list[i])
	{
		*tmp = ft_atoi(list[i]);
		//printf("[%d]\n", *tmp);
		tmp++;
		i++;
	}
	//printf("{A}\n");
}

void	pile_free(t_p *p)
{
	free(p->nbr);
	p->size = 0;
}
