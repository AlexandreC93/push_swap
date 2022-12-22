#include "push_swap.h"
#include "libft/libft.h"

int	sort_3(t_p *p_a)
{
	int		*tmp;
	int		op;

	op = 0;
	tmp = p_a->nbr;
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
	int		min_size;
	int		op;

	min_size = p_a->min_size;
	printf("%d\n", min_size);
	op = 0;
	tmp_a = p_a->nbr;
	tmp_b = p_b->nbr;
	printf("avant %d\n", tmp_a[p_a->min_size]);
	printf("avant %d\n", tmp_b[p_b->min_size]);
	op += ft_push(p_a, p_b);
	op += ft_push(p_a, p_b);
	printf("%d\n", p_a->min_size);
	printf("apres %d\n", tmp_a[p_a->min_size]);
	printf("apres %d\n", tmp_b[p_b->min_size]);
	return (op);
}

int	sort_swap(t_p *p)
{
	int		*tmp;

	tmp = p->nbr;
	if (tmp[0] < tmp[1])
	{
		ft_swapp(p, NULL);
		return (1);
	}
	return (0);
}

int	sort_empty(t_p *dest, t_p *src)
{
	int		op;

	op = 0;
	while (src->size > 0)
		op += ft_push(src, dest);
	return (op);
}
