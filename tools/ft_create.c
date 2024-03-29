/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:33:01 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/19 17:59:06 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <stdlib.h>

static	void	ft_draw(char c,
t_info_game *p, int i, int j)
{
	if (c == '1')
		mlx_put_image_to_window(p->int_p, p->win_p,
			p->wall, j * 50, i * 50);
	else if (c == '0')
		mlx_put_image_to_window(p->int_p, p->win_p,
			p->floor, j * 50, i * 50);
	else if (c == 'P' )
		mlx_put_image_to_window(p->int_p, p->win_p,
			p->player, j * 50, i * 50);
	else if (c == 'C' )
		mlx_put_image_to_window(p->int_p, p->win_p,
			p->coins, j * 50, i * 50);
	else if (c == 'E' )
		mlx_put_image_to_window(p->int_p, p->win_p,
			p->ex, j * 50, i * 50);
}

static void	ft_getfloor(t_info_game *info_game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (info_game->map[i])
	{
		j = 0;
		while (info_game->map[i][j])
		{
			mlx_put_image_to_window(info_game->int_p,
				info_game->win_p, info_game->floor,
				j * 50, i * 50);
			j++;
		}
		i++;
	}
}

static void	init_stc(t_info_game *info_game)
{
	int	wl_1;
	int	wl_2;

	wl_1 = 50;
	wl_2 = 50;
	info_game->floor = mlx_xpm_file_to_image(info_game->int_p,
			"env/floor.xpm", &wl_1, &wl_2);
	info_game->wall = mlx_xpm_file_to_image(info_game->int_p,
			"env/Tree.xpm", &wl_1, &wl_2);
	info_game->player = mlx_xpm_file_to_image(info_game->int_p,
			"env/kratos.xpm", &wl_1, &wl_2);
	info_game->coins = mlx_xpm_file_to_image(info_game->int_p,
			"env/col.xpm", &wl_1, &wl_2);
	info_game->ex = mlx_xpm_file_to_image(info_game->int_p,
			"env/exit.xpm", &wl_1, &wl_2);
	if (!info_game->floor || !info_game->wall || !info_game->ex
		|| !info_game->player || !info_game->coins)
	{
		ft_clean_str(info_game->cp_map);
		ft_clean_str(info_game->map);
		ft_putendl_fd("\033[1;31m recoures are not here (*.xpm)\033[0m", 2);
		exit(1);
	}
}

void	ft_create(t_info_game *info_game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	init_stc(info_game);
	ft_getfloor(info_game);
	while (info_game->map[i])
	{
		j = 0;
		while (info_game->map[i][j])
		{
			ft_draw(info_game->map[i][j],
				info_game, i, j);
			j++;
		}
		i++;
	}
	ft_hooks(info_game);
	mlx_loop(info_game->int_p);
}
