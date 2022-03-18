/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:13:11 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 04:10:39 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	sa(t_list **a)
{
	if (ft_lstsize(*a) <= 1)
		return ;
	swap(a);
}

void	sb(t_list **b)
{
	if (ft_lstsize(*b) <= 1)
		return ;
	swap(b);
}

void	ss(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) <= 1 && ft_lstsize(*b) <= 1)
		return ;
	swap(a);
	swap(b);
}

void	ra(t_list **a)
{
	if (ft_lstsize(*a) <= 1)
		return ;
	rotate(a);
}

void	rb(t_list **b)
{
	if (ft_lstsize(*b) <= 1)
		return ;
	rotate(b);
}
