/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:56:05 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/02/24 18:45:15 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) <= 1 && ft_lstsize(*b) <= 1)
		return ;
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}

void	push_a(t_list **a, t_list **b)
{
	if (ft_lstsize(*b) < 1)
		return ;
	push(b, a);
	write(1, "pa\n", 3);
}

void	push_b(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) < 1)
		return ;
	push(a, b);
	write(1, "pb\n", 3);
}

void	rra(t_list **a)
{
	if (ft_lstsize(*a) <= 1)
		return ;
	reverse(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	if (ft_lstsize(*b) <= 1)
		return ;
	reverse(b);
	write(1, "rrb\n", 4);
}
