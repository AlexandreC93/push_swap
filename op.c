#include "push_swap.h"
#include "libft/libft.h"

int	ft_swapp(t_p *p_a, t_p *p_b)
{
	// int		i;
	int		*tmp;
	// int		size;
	int		buff;

	// i = 1;
	tmp = p_a->nbr;
	// size = p_a->size;
	buff = tmp[-1];
	tmp[-1] = tmp[-2];
	tmp[-2] = buff;
	if (p_b)
		ft_swapp(p_b, NULL);
	return (1);
}

int	ft_push(t_p *p_a, t_p *p_b)
{
	int		*tmp_a;
	int		*tmp_b;

	tmp_a = p_a->nbr;
	tmp_b = p_b->nbr;

	p_b->size++;
	tmp_b[p_b->size - 1] = tmp_a[p_a->size - 1];
	p_a->size--; 

	return (1);
}

int	ft_rotate(t_p *p_a, t_p *p_b)
{
	int		buff;
	int		*tmp;
	int		size;

	size = p_a->size;
	tmp = p_a->nbr;
	buff = tmp[size - 2];
	while (--size >= 2)
		tmp[size - 1] = tmp [size - 2];
	tmp[0] = buff;
	if (p_b)
		ft_rotate(p_b, NULL);
	return (1);
}

int	ft_revrotate(t_p *p_a, t_p *p_b)
{
	int		buff;
	int		*tmp;
	int		size;
	int		i;

	size = p_a->size;
	tmp = p_a->nbr;
	i = -1;
	buff = tmp[size - 2];
	while (++i < size)
		tmp[i] = tmp [i + 1];
	tmp[size - 1] = buff;
	if (p_b)
		ft_revrotate(p_b, NULL);
	return (1);
}