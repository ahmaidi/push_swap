/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling_list_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:05:51 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 03:59:22 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
