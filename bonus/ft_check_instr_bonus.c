/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_instr_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 23:56:02 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 00:28:56 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_check_instr(char *line)
{
	if (!ft_strcmp(line, "sa") || !ft_strcmp(line, "sb")
		|| !ft_strcmp(line, "ss") || !ft_strcmp(line, "ra")
		|| !ft_strcmp(line, "rb") || !ft_strcmp(line, "rr")
		|| !ft_strcmp(line, "rra") || !ft_strcmp(line, "rrb")
		|| !ft_strcmp(line, "rrr") || !ft_strcmp(line, "pb")
		|| !ft_strcmp(line, "pa"))
		return (1);
	return (0);
}
