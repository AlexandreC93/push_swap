#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>


typedef struct	s_pile
{
	int		size;
	int		*nbr;
	int		min_size;
}	t_p;

# define PILE_B_LAST (p_b->nbr)[p_b->size - 1]
# define PILE_A_LAST (p_a->nbr)[p_a->size - 1]

t_p	pile_init(char **av);
t_p	pile_alloc(int size);
void	pile_free(t_p *p);
void	pile_fill(t_p *p, char **list);
int	ft_push(t_p *p_a, t_p *p_b);
int	ft_swapp(t_p *p_a, t_p *p_b);
int	ft_rotate(t_p *p_a, t_p *p_b);
int	ft_revrotate(t_p *p_a, t_p *p_b);
int	is_sorted(t_p *p_a);
int	sort_3(t_p *p_a);
int	sort_5(t_p *p_a, t_p *p_b);
int	pile_sort(t_p *p_a, t_p *p_b, int cases);
int	sort_start(t_p *p_a);
int	sort_default(t_p *p_a, t_p *p_b);
int	sort_empty(t_p *p_a, t_p *p_b);
int	check_nbr(char **list);
int	check_double(char **list);
int	find_bigger(t_p pile, int *b);
int	check_max(char **list);
int	check_arg(char **list);

#endif
