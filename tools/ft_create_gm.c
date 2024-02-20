/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_gm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:13:37 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/20 17:18:21 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static int	check_pce_framer_ex(char **str);

static void	errr(void)
{
	ft_putendl_fd("\033[1;31m Map not playable x_X! ", 2);
	exit(1);
}

static void	ft_gogm(t_info_game *info_gm, char **map)
{
	void	*int_pt;
	void	*win_pt;

	ft_clean_str(info_gm->cp_map);
	info_gm->cp_map = malloc(sizeof(char *) * (info_gm->l_mp + 1));
	ft_strrcpy(info_gm->cp_map, map, info_gm->l_mp, info_gm->w_mp);
	framer_fill(info_gm, info_gm->pl_px, info_gm->pl_py, 'E');
	if (check_pce_framer_ex(info_gm->cp_map))
	{
		int_pt = mlx_init();
		win_pt = mlx_new_window(int_pt, (info_gm->w_mp) * 50,
			(info_gm->l_mp) * 50, "so_long");
		info_gm->int_p = int_pt;
		info_gm->win_p = win_pt;
		ft_create(info_gm);
	}
	else
	{
		ft_clean_str(info_gm->cp_map);
		ft_clean_str(info_gm->map);
		errr();
	}
}

static int	check_pce_framer_pl(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] != '1' && str[i][j] != '@'
				&& str[i][j] != '0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	check_pce_framer_ex(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] != '1' && str[i][j] != 'E'
				&& str[i][j] != 'X')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_create_gm(t_info_game *info_gm, char **map)
{
	framer_fill(info_gm, info_gm->pl_px, info_gm->pl_py, 'P');
	if (check_pce_framer_pl(info_gm->cp_map))
		ft_gogm(info_gm, map);
	else
	{
		ft_clean_str(info_gm->cp_map);
		ft_clean_str(info_gm->map);
		errr();
	}
}
