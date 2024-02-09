/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_gm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:13:37 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/09 11:29:03 by ynassibi         ###   ########.fr       */
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
	int i = 0;

	framer_fill(info_gm,info_gm->pl_px, info_gm->pl_py);
	if (check_pce_framer(info_gm->cp_map))
	{
		printf("------------map------------\n");
		while (i < 9){
			printf("%s\n", info_gm->cp_map[i++]);
		 }
	}
	else
	{
	}
}
