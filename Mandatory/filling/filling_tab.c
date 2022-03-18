/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:51:36 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/02 14:52:50 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*filling_tab(t_list *lst)
{
	int		*t;
	int		*i;
	t_list	*p;

	p = lst;
	t = malloc(ft_lstsize(lst) * sizeof(int));
	if (!t)
		return (NULL);
	i = t;
	while (p)
	{
		*i = p->data;
		p = p->next;
		i++;
	}
	return (t);
}
