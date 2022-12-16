#include "libft/libft.h"
#include "push_swap.h"

t_p	pile_init(char **av)
{
	int		i;
	int		t;
	t_p		pile;

	t = 1;
	while (list[t] && list[t][0] == '-' || !(ft_strncmp("--")))
	{
		if (ft_isdigit(list[j][1]))
			break;
		t++;
	}
	i = t;
	while (list[i])
		i++;
	pile = pile_alloc(i - t);
	pile_fill(&pile, list);
	return (pile);
}

static t_p	pile_alloc(int size)
{
	t_p		pile;

	pile.nbr = (int*)malloc(sizeof(int) * size);
	pile.size = size;
	return (pile);
}

void	pile_fill(t_p a, char **list)
{
	
}
