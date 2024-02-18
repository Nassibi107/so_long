/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:14:41 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/18 11:25:39 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_init(t_info_game *stc)
{
	stc->pl_py = 0;
	stc->pl_px = 0;
	stc->map = NULL;
	stc->cp_map = NULL;
	stc->l_mp = 0;
	stc->w_mp = 0;
	stc->int_p = NULL;
	stc->win_p = NULL;
	stc->img_p = NULL;
	stc->wall = NULL;
	stc->floor = NULL;
	stc->player = NULL;
	stc->ex = NULL;
	stc->coins = NULL;
}
