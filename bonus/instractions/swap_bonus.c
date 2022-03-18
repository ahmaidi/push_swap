/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:03:11 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 04:01:16 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
