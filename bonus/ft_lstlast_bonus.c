/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:19:18 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 03:59:42 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
