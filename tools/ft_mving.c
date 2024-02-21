/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mving.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:05:50 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/21 11:47:07 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static	void	ft_mv_up(t_info_game *s)
{
	mlx_put_image_to_window(s->int_p, s->win_p, s->floor,
		s->pl_px * 50, s->pl_py * 50);
	mlx_put_image_to_window(s->int_p, s->win_p, s->player,
		s->pl_px * 50, s->pl_py * 50 - 50);
}

static void	ft_mv_down(t_info_game *s)
{
	mlx_put_image_to_window(s->int_p, s->win_p,
		s->floor, s->pl_px * 50, s->pl_py * 50);
	mlx_put_image_to_window(s->int_p, s->win_p,
		s->player, s->pl_px * 50, s->pl_py * 50 + 50);
}

static void	ft_mv_right(t_info_game *s)
{
	mlx_put_image_to_window(s->int_p, s->win_p,
		s->floor, s->pl_px * 50, s->pl_py * 50);
	mlx_put_image_to_window(s->int_p, s->win_p,
		s->player, s->pl_px * 50 + 50, s->pl_py * 50);
}

static void	ft_mv_left(t_info_game *s)
{
	mlx_put_image_to_window(s->int_p, s->win_p,
		s->floor, s->pl_px * 50, s->pl_py * 50);
	mlx_put_image_to_window(s->int_p, s->win_p,
		s->player, s->pl_px * 50 - 50, s->pl_py * 50);
}

void	ft_mving(int f, t_info_game *s)
{
	if (f == 126)
		ft_mv_up(s);
	else if (f == 125)
		ft_mv_down(s);
	else if (f == 124)
		ft_mv_right(s);
	else if (f == 123)
		ft_mv_left(s);
}
