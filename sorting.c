#include "push_swap.h"
#include "libft/libft.h"


#define CASE_A ((tmp[0] < tmp[1]) || (tmp[0] > tmp[1]))
#define CASE_B ((tmp[i] < tmp[i + 1]) || (tmp[i] > tmp[i + 1]))
#define A_MED ((p_a->size)/2)

int		is_sorted(t_p *p_a)
{
	int		i;
	int		*tmp;

	tmp = p_a->nbr;
	i = 1;
	while (i <= p_a->size - 3)
	{
		if ((tmp[i] < tmp[i + 1]) || (tmp[i] > tmp[i + 1]))
			return (1);
		i++;
	}
	if (CASE_A && CASE_B)
		return (-3);
	if (CASE_A)
		return (-2);
	if (CASE_B)
		return (-1);
	return (0);
}

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
	if (is_sorted(p_a))
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

int	sort_default(t_p *p_a, t_p *p_b)
{
	int		b;
	int		pos;
	int		op;

	op = 0;
	while (p_a->size > 3)
	{
		pos = find_bigger(*p_a, &b);
		if (b == (p_a->nbr)[p_a->size - 1])
			op += ft_push(p_a, p_b);
		else if (pos > A_MED)
			op += ft_rotate(p_a, NULL);
		else
			op += ft_revrotate(p_a, NULL);
	}
	op += sort_3(p_a);
	op += sort_empty(p_a, p_b);
	return (op);
}
