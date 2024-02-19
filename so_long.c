/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:52:36 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/19 12:51:51 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "tools/tools.h"

static void	err(void)
{
	ft_putendl_fd("\033[1;31m Map not valid x_X! ", 2);
	exit(1);
}

static int	parsing(char **map)
{
	if (is_one(map[0])
		&& is_s_ofone(map)
		&& is_eq_lenght(map)
		&& sepone(map))
	{
		if (check_pce(map))
			return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	char		*str;
	char		**map;
	t_info_game	info_game;

	if (ac == 2 && ft_strncmp(is_vextions(av[1]), ".ber", 5) == 0)
	{
		str = get_maps(av[1]);
		if (is_not_nline(str) && str)
		{
			map = ft_split(str, '\n');
			free(str);
			if (parsing(map) == 1)
				ft_switch(map, &info_game);
			else
				err();
		}
		else
			err();
	}
	else
		err();
}
