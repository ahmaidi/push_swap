/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:07:39 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/17 04:04:34 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*a;

	a = NULL;
	if (argc > 1)
	{
		if (detect_error(argv + 1))
		{
			write(2, "ERROR\n", 6);
			exit(1);
		}
		filling_list(&a, (argv + 1));
		if (is_sorted(&a))
			return (0);
		transforme_list(&a);
		if (ft_lstsize(a) <= 5)
			ft_small_sorted(&a);
		else
			ft_big_sorted(&a);
	}
	return (0);
}
