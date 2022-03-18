/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:19:18 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/02/27 18:51:46 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*prev;
	t_list	*list;

	if (!lst)
		return (NULL);
	list = lst;
	while (list)
	{
		prev = list;
		list = list->next;
	}
	return (prev);
}
