/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:13:11 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/11 21:54:53 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **a)
{
	if (ft_lstsize(*a) <= 1)
		return ;
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	if (ft_lstsize(*b) <= 1)
		return ;
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) <= 1 && ft_lstsize(*b) <= 1)
		return ;
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}

void	ra(t_list **a)
{
	if (ft_lstsize(*a) <= 1)
		return ;
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	if (ft_lstsize(*b) <= 1)
		return ;
	rotate(b);
	write(1, "rb\n", 3);
}
