/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:05:09 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 04:11:30 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	rotate(t_list **a)
{
	t_list	*q;
	t_list	*head;

	if (ft_lstsize(*a) <= 1)
		return ;
	q = *a;
	head = (*a)->next;
	while (q->next)
		q = q->next;
	q->next = *a;
	(*a)->next = NULL;
	*a = head;
}
