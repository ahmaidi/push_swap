/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:37:15 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/02/22 18:46:39 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) <= 1 && ft_lstsize(*b) <= 1)
		return ;
	reverse(a);
	reverse(b);
	write(1, "rrr\n", 4);
}
