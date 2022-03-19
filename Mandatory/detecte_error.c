/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detecte_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:34:48 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/19 13:49:44 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_nbr(char *string)
{
	if (ft_strlen(string) == 1 && *string == '0')
		return (1);
	return (ft_atoi_push(string));
}

static int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] -(unsigned char)s2[i]);
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
		j = 0;
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
