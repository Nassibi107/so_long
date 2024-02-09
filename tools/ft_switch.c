/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:12:00 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/09 10:21:29 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <stdio.h>
#include <stdlib.h>

static char	*ft_strfill(int wt,char *map)
{
	int	i;
	char *str = malloc(wt + 1);
	i = 0;
	while (map[i])
	{
		str[i] = map[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

static void ft_strrcpy(char **str, char **map, int len, int wt)
{
	int	y;
	y = 0;
	while(y < len + 1)
	{
		str[y] = ft_strfill(wt,map[y]);
		y++;
	}
	str[y] = 0;
}
void	ft_switch(char **map)
{
	t_info_game	*inf_game;
	int			len;
	int			wt;

	inf_game = malloc(sizeof(t_info_game));
	if (!inf_game)
		return ;
	inf_game->pl_px = get_pl_postion(map)[1];
	inf_game->pl_py = get_pl_postion(map)[0];
	inf_game->l_mp = get_demof_map(map)[0];
	inf_game->w_mp = get_demof_map(map)[1];
	len = inf_game->l_mp;
	wt = inf_game->w_mp;
	inf_game->map = NULL;
	inf_game->map =(char **)malloc(sizeof(char *) * (len + 1));
	if (!inf_game->map)
		return ;
	ft_strrcpy(inf_game->map,map,len, wt);
	inf_game->cp_map =(char **)malloc(sizeof(char *) * (len + 1));
	if (!inf_game->map)
		return ;
	ft_strrcpy(inf_game->cp_map,map,len, wt);
	ft_create_gm(inf_game);
 }
 	// int i = 0;

	// printf("------------map------------\n");
	// while (i < len + 1){
	// 	printf("%s\n", inf_game->map[i++]);
	// }
	// i = 0;
	// printf("------------cp_map------------\n");
	// while (i < len + 2){
	// 	printf("%s\n", inf_game->cp_map[i++]);
	// }
