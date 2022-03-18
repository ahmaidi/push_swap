/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:05:51 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 02:32:15 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	filling_list(t_list **head, char **ar)
{
	int		i;

	i = 0;
	while (ar[i] != NULL)
	{
		ft_lstadd_back(head, ft_lstnew(ft_atoi_push(ar[i])));
		i++;
	}
}
