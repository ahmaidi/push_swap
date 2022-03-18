/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:50:34 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 03:59:52 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*n;
	int		count;

	count = 0;
	n = lst;
	while (n)
	{
		count++;
		n = n->next;
	}
	return (count);
}
