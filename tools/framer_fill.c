/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framer_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:44:10 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/07 15:10:37 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"


void	framer_fill (t_info_game *s, int px, int py)
{
	if(px < 0 || py < 0
		|| py > s->l_mp || px > s->w_mp
		|| s->cp_map[px][py] == '1'
		|| s->cp_map[px][py] == 'F')
		return ;
	s->cp_map[px][py] = 'F';
	framer_fill (s,px - 1, py);
	framer_fill (s,px + 1, py);
	framer_fill (s,px,py - 1);
	framer_fill (s,px ,py + 1);
}
