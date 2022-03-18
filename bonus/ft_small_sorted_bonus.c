/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:36:35 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 03:59:55 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static	int	min_list(t_list	**a, int i)
{
	t_list	*p;
	int		position;

	position = 1;
	p = *a;
	while (p)
	{
		if (p->data == i)
			break ;
		position++;
		p = p->next;
	}
	return (position);
}

void	ft_small_sorted(t_list **a)
{
	t_list	*b;
	int		min_p;
	int		i;
	int		size;

	i = 0;
	b = NULL;
	size = ft_lstsize(*a);
	while (ft_lstsize(*a) > 3)
	{
		min_p = min_list(a, i);
		if (min_p - 1 == 0)
		{
			push_b(a, &b);
			i++;
		}
		else if (min_p > (ft_lstsize(*a) / 2))
			rra(a);
		else if (min_p >= (ft_lstsize(*a) / 2))
			ra(a);
	}
	sorted_3(a, size - 3);
	while (b)
		push_a(a, &b);
}
