#include "push_swap.h"
#include "libft/libft.h"


#define CASE_A ((!rev && tmp[0] < tmp[1]) || (rev && tmp[0] > tmp[1]))
#define CASE_B ((!rev && tmp[i] < tmp[i + 1]) || (rev && tmp[i] > tmp[i + 1]))
#define A_MED ((pile_a->size)/2)

int		pile_sort(t_p *p_a, t_p *p_b, int cases)
{
	int		op;

	op = 0;
	if (p_a->size == 3)
		op += sort_3(p_a);
	else if (cases == -3)
	{
		op += ft_swapp(p_a, NULL);
		op += sort_start(p_a);
	}
	else if (cases == -1)
		op += ft_swapp(p_a, NULL);
	else if (cases == -2)
		op += sort_start(p_a);
	else
		op += sort_default(p_a, p_b);
	if (is_sort(p_a, 0))
		op += pile_sort(p_a, p_b, 1);
	return (op);
}

int	sort_start(t_p *p_a)
{
	ft_revrotate(p_a, NULL);
	ft_revrotate(p_a, NULL);
	ft_swapp(p_a, NULL);
	ft_rotate(p_a, NULL);
	ft_rotate(p_a, NULL);
	return (5);
}

int	sort_default(t_p *p_a, t_p *p_b, int o)
{
	int		b;
	int		pos;
	int		op;

	op = 0;
	while (p_a->size > 3)
	{
		pos = find_bigger(*p_a, &b);
		if (b == PILE_A_LAST)
			op += ft_push(p_a, p_b);
		else if (pos > A_MED)
			op += ft_rotate(p_a, NULL);
		else
			op += ft_revrotate(p_a, NULL);
	}
	op += sort_three(p_a);
	op += sort_empty(p_a, p_b);
	return (op);
}
