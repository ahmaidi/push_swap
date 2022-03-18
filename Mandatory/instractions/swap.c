/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:03:11 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/02/20 13:09:30 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **a)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(*a) <= 1)
		return ;
	first = *a;
	second = (*a)->next;
	first ->next = second->next;
	second->next = first;
	*a = second;
}
