/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_down.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:57:08 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/18 18:16:15 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_down(t_info_game *gm, int *i)
{
	update_ppl(gm);
	if (gm->map[gm->pl_py + 1][gm->pl_px] == '0')
	{
		ft_swap(&gm->map[gm->pl_py + 1][gm->pl_px],
			&gm->map[gm->pl_py][gm->pl_px]);
		ft_putmv(i, 125);
		ft_mving(125, gm);
	}
	else if (gm->map[gm->pl_py + 1][gm->pl_px] == 'C')
	{
		gm->map[gm->pl_py + 1][gm->pl_px] = '0';
		ft_swap(&gm->map[gm->pl_py][gm->pl_px],
			&gm->map[gm->pl_py + 1][gm->pl_px]);
		ft_putmv(i, 125);
		ft_mving(125, gm);
	}
	else if (gm->map[gm->pl_py + 1][gm->pl_px] == 'E')
	{
		if (ft_col_we(gm->map))
		{
			mlx_destroy_window(gm->int_p, gm->win_p);
			you_win(gm);
		}
		ft_putmv(i, 125);
	}
}
