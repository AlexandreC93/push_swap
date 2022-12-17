#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_pile
{
	int		size;
	int		*nbr;
}	t_p;

t_p	pile_init(char **av);
t_p	pile_alloc(int size);
void	pile_fill(t_p *p, char **list);
int	ft_push(t_p *p_a, t_p *p_b);
int	ft_swapp(t_p *p_a, t_p *p_b);
int	ft_rotate(t_p *p_a, t_p *p_b);
int	ft_revrotate(t_p *p_a, t_p *p_b);

#endif
