/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:32:48 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/07 18:00:27 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *news)
{
	t_list	*last;

	if (lst == NULL || news == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = news;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = news;
	}
}
