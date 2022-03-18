/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:25:49 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 03:32:56 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sorted_2(t_list **a)
{
	t_list	*p;

	p = *a;
	if (p->index > (p->next)->index)
		sa(a);
}

static	int	min_list(t_list	**a, int nbr)
{
	t_list	*p;
	int		position;

	position = 1;
	p = *a;
	while (p)
	{
		if (p->index == nbr)
			break ;
		position++;
		p = p->next;
	}
	return (position);
}

static void	in_first_place(t_list **a)
{
	t_list	*p;

	p = *a;
	sa(a);
	ra(a);
}

static void	in_middle_place(t_list **a)
{
	t_list	*p;

	p = *a;
	if (p->index > (p->next)->index && (p->next->next)->index > p->index)
		sa(a);
	else
		ra(a);
	if (!is_sorted(a))
		rra(a);
}

void	sorted_3(t_list **a, int nbr)
{
	t_list	*p;
	int		p_min;

	p = *a;
	if (is_sorted(a))
		return ;
	if (ft_lstsize(*a) == 2)
		sorted_2(a);
	else if (ft_lstsize(*a) == 3)
	{
		p_min = min_list(a, nbr);
		if (p_min == 3)
		{
			if (p->index > (p->next)->index)
				sa(a);
			rra(a);
		}
		else if (p_min == 1)
			in_first_place(a);
		else if (p_min == 2)
			in_middle_place(a);
	}
}
