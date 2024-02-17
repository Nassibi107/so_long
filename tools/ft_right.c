/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_right.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:50:29 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/17 12:03:27 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_right(t_info_game *gm, int *i)
{
	update_ppl(gm);
	if (gm->map[gm->pl_py][gm->pl_px + 1] == '0')
	{
		ft_swap(&gm->map[gm->pl_py][gm->pl_px + 1],
			&gm->map[gm->pl_py][gm->pl_px]);
		(*i)++;
		ft_mving(124, gm);
	}

	else if (gm->map[gm->pl_py][gm->pl_px + 1] == 'C')
	{
		gm->map[gm->pl_py][gm->pl_px + 1] = '0';
		ft_swap(&gm->map[gm->pl_py][gm->pl_px + 1],
			&gm->map[gm->pl_py][gm->pl_px]);
		(*i)++;
		ft_mving(124, gm);
	}
	// else if (gm->map[gm->pl_px][gm->pl_py + 1] == 'E'
	// 		&& ft_find_col(gm->map))
	// {
	// 	(*i)++;
	// }
	// else if (gm->map[gm->pl_px][gm->pl_py + 1] == 'E')
	// 	printf("OK");
}
