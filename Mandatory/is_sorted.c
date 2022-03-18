/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:36:59 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 03:31:36 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list **a)
{
	t_list	*p;
	t_list	*q;

	p = *a;
	while (p)
	{
		q = p->next;
		while (q)
		{
			if (p->index > q->index)
				return (0);
			q = q->next;
		}
		p = p->next;
	}
	return (1);
}
