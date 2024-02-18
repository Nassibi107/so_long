/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_ppl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:44:32 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/18 11:58:35 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	update_ppl(t_info_game *gm)
{
	int	i;
	int	j;

	i = 0;
	while (gm->map[i])
	{
		j = 0;
		while (gm->map[i][j])
		{
			if (gm->map[i][j] == 'P')
			{
				gm->pl_py = i;
				gm->pl_px = j;
				break ;
			}
			j++;
		}
		i++;
	}
}
