/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:08:16 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/01 18:27:33 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_it(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static int	partition(int *tab, int low, int high)
{
	int	i;
	int	j;
	int	pivot;

	pivot = tab[high];
	i = (low - 1);
	j = low;
	while (j <= high - 1)
	{
		if (tab[j] < pivot)
		{
			i++;
			swap_it(&tab[i], &tab[j]);
		}
		j++;
	}
	swap_it(&tab[i + 1], &tab[high]);
	return (i + 1);
}

void	sort_tab(int *tab, int low, int high)
{
	int	i;

	if (low < high)
	{
		i = partition(tab, low, high);
		sort_tab(tab, low, i - 1);
		sort_tab(tab, i + 1, high);
	}
}
