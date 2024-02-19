/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:59:53 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/19 12:27:06 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <stdlib.h>

int	key_hook(int k, void *prg)
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
	{
		mlx_destroy_window(sl->int_p, sl->win_p);
		ft_clean_str(sl->cp_map);
		ft_clean_str(sl->map);
		exit(1);
	}
	return (0);
}

void	ft_hooks(t_info_game *gm)
{
	mlx_hook(gm->win_p, 2, 0, key_hook, gm);
}
