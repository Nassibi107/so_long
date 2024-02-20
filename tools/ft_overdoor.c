/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_overdoor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:42:40 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/20 12:53:42 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static void	count_player(char *str, int *p)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'P')
			*p += 1;
		i++;
	}
}

static void	count_colle(char *str, int *c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'C')
			*c += 1;
		i++;
	}
}

static void	count_exit(char *str, int *e)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'E')
			*e += 1;
		i++;
	}
}

static int	check_pieces_map(char	**str, int *f)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '\n')
				return (0);
			if (str[i][j] != '0' && str[i][j] != '1'
				&& str[i][j] != 'P' && str[i][j] != 'E'
				&& str[i][j] != 'C')
				return (error_pce(0, 0, 0, 0), f = 0, 0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

int	check_pce(char **str, int *f)
{
	int	i;
	int	p;
	int	e;
	int	c;

	p = 0;
	e = 0;
	c = 0;
	i = 0;
	if (!check_pieces_map(str, f))
		return (f = 0, 0);
	while (str[i])
	{
		count_player(str[i], &p);
		count_exit(str[i], &e);
		count_colle(str[i], &c);
		i++;
	}
	if (p == 1 && e == 1 && c >= 1)
		return (1);
	return (error_pce(p, c, e, 1), f = 0, 0);
}
