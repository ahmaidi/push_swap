/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:44:52 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/15 16:45:50 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a(t_list **a, t_list **b, int index_bigger)
{
	int	index;

	if (index_bigger <= (ft_lstsize(*b) / 2))
	{
		while (index_bigger != 0)
		{
			rb(b);
			index_bigger--;
		}
		push_a(a, b);
	}
	if (index_bigger > (ft_lstsize(*b) / 2))
	{
		index = ft_lstsize(*b) - index_bigger;
		while (index != 0)
		{
			rrb(b);
			index--;
		}
		push_a(a, b);
	}
}
