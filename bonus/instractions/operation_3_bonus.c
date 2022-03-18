/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:37:15 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 04:11:22 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	rrr(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) <= 1 && ft_lstsize(*b) <= 1)
		return ;
	reverse(a);
	reverse(b);
}