/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detecte_error_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:34:48 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 23:04:36 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	is_nbr(char *string)
{
	if (ft_strlen(string) == 1 && *string == '0')
		return (1);
	return (ft_atoi_push(string));
}

static int	zero_after(char *s)
{
	int	j;

	j = 0;
	if (s[j] == '+')
		j++;
	while (s[j] == '0' && s[j] != '\0')
		j++;
	return (j);
}

static int	is_deplicate(char	**s)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			z = zero_after(s[j]);
			if (!ft_strcmp(s[i], s[j] + z))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	detect_error(char **s)
{
	int	i;
	int	deplicate;

	i = 0;
	deplicate = is_deplicate(s);
	if (deplicate == 1)
		return (1);
	while (s[i] != NULL)
	{
		if (!is_nbr(s[i]))
			return (1);
		i++;
	}
	return (0);
}
