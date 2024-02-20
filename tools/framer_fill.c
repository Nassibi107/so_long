/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framer_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:44:10 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/20 17:14:30 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static void	framer_fill_pl(t_info_game *s, int px, int py)
{
	if (px < 0 || py < 0
		|| py >= s->l_mp || px >= s->w_mp
		|| s->cp_map[py][px] == '1'
		|| s->cp_map[py][px] == '@')
		return ;
	s->cp_map[py][px] = '@';
	framer_fill_pl(s, px - 1, py);
	framer_fill_pl(s, px + 1, py);
	framer_fill_pl(s, px, py - 1);
	framer_fill_pl(s, px, py + 1);
}

static void	framer_fill_ex(t_info_game *s, int px, int py)
{
	if (px < 0 || py < 0
		|| px >= s->w_mp
		|| py >= s->l_mp
		|| s->cp_map[py][px] == 'E'
		|| s->cp_map[py][px] == 'X'
		|| s->cp_map[py][px] == '1')
		return ;
	s->cp_map[py][px] = 'X';
	framer_fill_ex(s, px + 1, py);
	framer_fill_ex(s, px - 1, py);
	framer_fill_ex(s, px, py + 1);
	framer_fill_ex(s, px, py - 1);
}

void	framer_fill(t_info_game *s, int px, int py, char f)
{
	if (f == 'P')
		framer_fill_pl(s, px, py);
	else if (f == 'E')
		framer_fill_ex(s, px, py);
}
