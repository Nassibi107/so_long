/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:12:00 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/20 17:12:41 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_switch(char **map, t_info_game *inf_game)
{
	int			len;
	int			wt;
	int			*arr_p;
	int			*arr_dm;

	ft_init(inf_game);
	arr_p = get_pl_postion(map);
	arr_dm = get_demof_map(map);
	inf_game->pl_px = arr_p[1];
	inf_game->pl_py = arr_p[0];
	inf_game->l_mp = arr_dm[0];
	inf_game->w_mp = arr_dm[1];
	free(arr_p);
	free(arr_dm);
	len = inf_game->l_mp ;
	wt = inf_game->w_mp ;
	inf_game->map = malloc(sizeof(char *) * (len + 1));
	if (!inf_game->map)
		return ;
	ft_strrcpy(inf_game->map, map, len, wt);
	inf_game->cp_map = malloc(sizeof(char *) * (len + 1));
	if (!inf_game->cp_map)
		return ;
	ft_strrcpy(inf_game->cp_map, map, len, wt);
	ft_create_gm(inf_game, map);
}
