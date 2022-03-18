/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transforme_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:39:29 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 03:29:36 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	transforme_list(t_list **lst)
{
	int		*tab;
	int		i;
	t_list	*p;

	i = 0;
	p = *lst;
	tab = filling_tab(*lst);
	if (!tab)
		return ;
	sort_tab(tab, 0, ft_lstsize(*lst) - 1);
	while (p)
	{
		i = 0;
		while (i < ft_lstsize(*lst))
		{
			if (tab[i] == p->index)
			{
				p->index = i;
				break ;
			}
			i++;
		}
		p = p->next;
	}
	free(tab);
}
