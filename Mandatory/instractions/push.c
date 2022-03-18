/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:08:49 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/02 17:10:36 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **lst, t_list **lst1)
{
	t_list	*head;

	if (ft_lstsize(*lst) < 1)
		return ;
	head = *lst;
	*lst = (*lst)->next;
	head->next = *lst1;
	*lst1 = head;
}
