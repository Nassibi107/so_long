/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:12:00 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/07 17:47:39 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <stdlib.h>


static char	*ft_strfill(int wt,char *map)
{
	char	*str;
	int	i;

	i = 0;
	str = malloc(wt + 1);
	if(!str)
		return (0x0);
	while (map[i])
	{
		str[i] = map[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

static char **ft_strrcpy(char **map, int len, int wt)
{
	int			y;
	char			**str;

	y = 0;
	str = malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (0x0);
	while(y < len)
	{
		str[y] = ft_strfill(wt, map[y]);
		y++;
	}
	str[y] = 0;
	return (str);
}
void	ft_switch(char **map)
{

	t_info_game	*inf_game;
	t_info_game sp;

	inf_game = &sp;
	int			len;
	int			wt;

	printf(" px : %i \t",get_pl_postion(map)[1]);
	printf(" py : %i \n",get_pl_postion(map)[0]);
	printf(" l_mp : %i \t",get_demof_map(map)[0]);
	printf(" w_mp : %i \n",get_demof_map(map)[1]);
	inf_game->pl_px = get_pl_postion(map)[1];
	inf_game->pl_py = get_pl_postion(map)[0];
	inf_game->l_mp = get_demof_map(map)[1];
	inf_game->w_mp = get_demof_map(map)[0];
	len = inf_game->l_mp;
	wt = inf_game->w_mp;
	printf(" >> len %i \t wt %i" ,len,wt);
	inf_game->map = ft_strrcpy(map, len, wt);
	inf_game->cp_map = ft_strrcpy(map, len, wt);
}
