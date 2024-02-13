/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_gm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:13:37 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/13 16:25:33 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <stdio.h>

static int check_pce_framer(char **str)
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

void	ft_create_gm(t_info_game *info_gm)
{
	void	*int_pt;
	void	*win_pt;

	framer_fill(info_gm,info_gm->pl_px, info_gm->pl_py);
	if (check_pce_framer(info_gm->cp_map))
	{
		int_pt = mlx_init();
		win_pt = mlx_new_window(int_pt,(info_gm->w_mp ) * 50 ,(info_gm->l_mp) *  50 , "so_long");
		info_gm->int_p = int_pt;
		info_gm->win_p = win_pt;
		ft_create(info_gm);
	}
	else
	{
		puts("ok");
		//ft_clean_str(info_gm->cp_map);
		//ft_clean_str(info_gm->map);
	}
}
