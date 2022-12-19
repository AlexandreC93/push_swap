#include "push_swap.h"
#include "libft/libft.h"

int	push_swap(t_p *p, char **av)
{
	t_p		p_b;
	int		op;
	int		i;

	i = 0;
	op = 0;
	*p = pile_init(av);
	while (i <= 4)
		printf("final %d\n", p->nbr[i++]);
	p_b.nbr = malloc(p->size * sizeof(int));
	p_b.size = 0;
	if (p->size < 2)
		return (0);
	if (p->size == 3)
		op += sort_3(p);
	op += sort_5(p, &p_b);
	return (op);
}

int	main(int ac, char **av)
{
	t_p		p_a;
	int		i;

	if (ac)
		push_swap(&p_a, av);
	printf("done\n");
	i = 0;
	while (i <= 4)
		printf("final %d\n", p_a.nbr[i++]);
	//pile_free(&p_a);
	return (0);
}
