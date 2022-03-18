/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:27:53 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 04:11:33 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	reverse(t_list **lst)
{
	t_list	*q;

	if (ft_lstsize(*lst) <= 1)
		return ;
	q = *lst;
	while (q->next->next)
		q = q->next;
	q->next->next = *lst;
	*lst = q->next;
	q->next = NULL;
}
