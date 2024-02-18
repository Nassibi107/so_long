/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pl_postion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:23:49 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/18 11:54:44 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	*get_pl_postion(char **map)
{
	int	*arr_p;
	int	i;
	int	j;

	i = 0;
	arr_p = malloc(2 * sizeof(int));
	if (!arr_p)
		return (0x0);
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
			{
				arr_p[0] = i;
				arr_p[1] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (arr_p);
}
