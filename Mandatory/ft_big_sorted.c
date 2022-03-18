/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:48:16 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 23:47:31 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_biggest	find_bigger(t_list **b, int size)
{
	t_list		*p;
	t_biggest	bigger;

	bigger.data = size;
	bigger.index = 0;
	p = *b;
	while (p)
	{
		if (p->index == size)
			break ;
		bigger.index++;
		p = p->next;
	}
	return (bigger);
}

static	void	ft_moves(t_biggest *a, t_biggest *b, int size)
{
	if (a->index <= size / 2)
		a->moves = a->index;
	else
		a->moves = size - a->index;
	if (b->index <= size / 2)
		b->moves = b->index;
	else
		b->moves = size - b->index;
}

void	ft_big_sorted(t_list **a)
{
	t_list			*b;
	t_biggest		first_bigger;
	t_biggest		second_bigger;

	push_to_b(a, &b);
	while (b)
	{
		first_bigger = find_bigger(&b, ft_lstsize(b) - 1);
		second_bigger = find_bigger(&b, ft_lstsize(b) - 2);
		ft_moves(&first_bigger, &second_bigger, ft_lstsize(b));
		if (first_bigger.moves > second_bigger.moves)
		{
			push_to_a(a, &b, second_bigger.index);
			push_to_a(a, &b, find_bigger(&b, first_bigger.data).index);
		}
		else
		{
			push_to_a(a, &b, first_bigger.index);
			push_to_a(a, &b, find_bigger(&b, second_bigger.data).index);
		}
		if ((*a)->index > ((*a)->next)->index)
			sa(a);
	}
}
