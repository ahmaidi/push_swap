/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:50:00 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/17 04:05:59 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	do_instruction(char *line, t_list **a, t_list **b)
{
	if (!ft_strcmp(line, "sa"))
		sa(a);
	else if (!ft_strcmp(line, "sb"))
		sb(b);
	else if (!ft_strcmp(line, "ss"))
		ss(a, b);
	else if (!ft_strcmp(line, "pa"))
		push_a(a, b);
	else if (!ft_strcmp(line, "pb"))
		push_b(a, b);
	else if (!ft_strcmp(line, "ra"))
		ra(a);
	else if (!ft_strcmp(line, "rb"))
		rb(b);
	else if (!ft_strcmp(line, "rr"))
		rr(a, b);
	else if (!ft_strcmp(line, "rra"))
		rra(a);
	else if (!ft_strcmp(line, "rrb"))
		rrb(b);
	else if (!ft_strcmp(line, "rrr"))
		rrr(a, b);
}

static void	check_it(t_list **a, t_list **b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!ft_check_instr(line))
		{
			write(2, "ERROR\n", 6);
			free(line);
			exit(1);
		}
		do_instruction(line, a, b);
		free(line);
		line = get_next_line(0);
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		if (detect_error(argv + 1))
		{
			write(2, "ERROR\n", 6);
			exit(1);
		}
		filling_list(&a, (argv + 1));
		check_it(&a, &b);
		if (is_sorted(&a) && !b)
			write(2, "OK\n", 3);
		else
			write(2, "KO\n", 3);
	}
	return (0);
}
