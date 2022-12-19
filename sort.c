#include "push_swap.h"
#include "libft/libft.h"

int	sort_3(t_p *p_a)
{
	int		*tmp;
	int		op;

	op = 0;
	tmp = p_a->nbr;

	//i = 0;
	if (tmp[0] > tmp[1] && tmp[1] < tmp[2] && tmp[2] > tmp[0])
		op += ft_swapp(p_a, NULL);
	else if (tmp[0] > tmp[1] && tmp[0] > tmp[2] && tmp[1] > tmp[2])
	{
		op += ft_swapp(p_a, NULL);
		op += ft_revrotate(p_a, NULL);
	}
	else if (tmp[0] > tmp[1] && tmp[0] > tmp[2] && tmp[1] < tmp[2])
		op += ft_rotate(p_a, NULL);
	else if (tmp[0] < tmp[1] && tmp[0] < tmp[2] && tmp[1] > tmp[2])
	{
		op += ft_swapp(p_a, NULL);
		op += ft_rotate(p_a, NULL);
	}
	else if (tmp[0] < tmp[1] && tmp[0] > tmp[2] && tmp[1] > tmp[2])
		op += ft_revrotate(p_a, NULL);
	return (op);
}

int	sort_5(t_p *p_a, t_p *p_b)
{
	int		*tmp_a;
	int		*tmp_b;
	int		op;

	op = 0;
	tmp_a = p_a->nbr;
	tmp_b = p_b->nbr;
	
	printf("%d\n", tmp_a[0]);
	printf("%d\n", tmp_b[0]);
/*
	op += ft_push(p_a, p_b);
	op += ft_push(p_a, p_b);
	printf("%d\n", tmp_a[0]);
	printf("%d\n", tmp_b[0]);
*/
	return (op);
}
