/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:59:53 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/20 10:06:46 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static int	ft_destroy(void *prg)
{
	t_info_game			*sl;

	sl = (t_info_game *) prg;
	ft_clean_str(sl->cp_map);
	ft_clean_str(sl->map);
	mlx_destroy_window(sl->int_p, sl->win_p);
	exit(1);
}

static int	key_hook(int k, void *prg)
{
	t_info_game			*sl;
	static int			i;

	sl = (t_info_game *) prg;
	if (k == 125)
		ft_down(sl, &i);
	else if (k == 126)
		ft_up(sl, &i);
	else if (k == 123)
		ft_left(sl, &i);
	else if (k == 124)
		ft_right(sl, &i);
	else if (k == 53)
		ft_destroy(prg);
	return (-1);
}

void	ft_hooks(t_info_game *gm)
{
	mlx_hook(gm->win_p, 2, 0, key_hook, gm);
	mlx_hook(gm->win_p, 17, 0, ft_destroy, gm);
}
