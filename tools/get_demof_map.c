/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_demof_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:45:14 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/18 11:51:26 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	*get_demof_map(char **map)
{
	int	*arr_dmp;
	int	i;
	int	j;

	i = 0;
	arr_dmp = malloc(2 * sizeof(int));
	if (!arr_dmp)
		return (0x0);
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			j++;
		}
		i++;
	}
	arr_dmp[0] = i ;
	arr_dmp[1] = j ;
	return (arr_dmp);
}
