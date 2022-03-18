/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:46:43 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 22:07:09 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_b(t_list **a, t_list **b, int midlle)
{
	t_list	*p;

	push_b(a, b);
	p = *b;
	if (p->index < midlle)
		rb(b);
}

static int	get_frame(int size)
{
	if (size > 200)
		return (size / 5);
	else if (size > 100)
		return (size / 4);
	else if (size > 50)
		return (size / 3);
	else if (size > 10)
		return (size / 2);
	return (1);
}

void	push_to_b(t_list **a, t_list **b)
{
	int	min;
	int	max;
	int	i;
	int	size;

	min = 0;
	max = 0;
	size = ft_lstsize(*a);
	while (*a)
	{
		max += get_frame(size);
		i = 0;
		while (i < (max - min) + 1)
		{
			if (((*a)->index >= min && (*a)->index <= max))
			{
				fill_b(a, b, (max + min) / 2);
				i++;
				size--;
			}
			else
				ra(a);
		}
		min = max + 1;
	}
}
