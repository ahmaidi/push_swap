/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:56:05 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 04:11:19 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	rr(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) <= 1 && ft_lstsize(*b) <= 1)
		return ;
	rotate(a);
	rotate(b);
}

void	push_a(t_list **a, t_list **b)
{
	if (ft_lstsize(*b) < 1)
		return ;
	push(b, a);
}

void	push_b(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) < 1)
		return ;
	push(a, b);
}

void	rra(t_list **a)
{
	if (ft_lstsize(*a) <= 1)
		return ;
	reverse(a);
}

void	rrb(t_list **b)
{
	if (ft_lstsize(*b) <= 1)
		return ;
	reverse(b);
}
