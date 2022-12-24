#include "push_swap.h"
#include "libft/libft.h"

int	push_swap(t_p p_a, char **av)
{
	t_p		p_b;
	int		op;
	int		cases;
	int		i;

	i = 0;
	op = 0;
	p_a = pile_init(av);
	while (i <= 4)
		printf("final %d\n", p_a.nbr[i++]);
	p_b.nbr = (int*)malloc(p_a.size * sizeof(int));
	p_b.size = 0;
	if (p_a.size < 2)
		return (0);
	if (p_a.size > 2 && (cases = is_sorted(&p_a)))
	{
		ft_putstr_fd("lets go le tri !", 1);
		op = pile_sort(&p_a, &p_b);
	}
	//if (p_a.size == 3)
	//	op += sort_3(&p_a);
	//op += sort_5(&p_a, &p_b);
	i = 0;
	while (i <= 4)
		printf("final %d\n", p_a.nbr[i++]);
	return (op);
}

int	main(int ac, char **av)
{
	t_p		p_a;
	if (ac < 2)
		return (0);
	push_swap(p_a, av);
	printf("done\n");
	//pile_free(&p_a);
	return (0);
}
