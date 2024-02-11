/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_gm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:13:37 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/11 15:56:06 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

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
			if (str[i][j] == '1' || str[i][j] == '@'
				|| str[i][j] == '0')
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_create_gm(t_info_game *info_gm)
{
	// int i = 0;

	framer_fill(info_gm,info_gm->pl_px, info_gm->pl_py);
	if (check_pce_framer(info_gm->cp_map))
	{
		void *p = mlx_init();
		void *pt = mlx_new_window(p, 1000, 1000, "test");
		(void)	pt;
		mlx_loop(p);
	}
	else
	{
		ft_clean_str(info_gm->cp_map);
		ft_clean_str(info_gm->map);
	}
}
