/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:36:59 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 04:00:07 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
			if (p->data > q->data)
				return (0);
			q = q->next;
		}
		p = p->next;
	}
	return (1);
}
