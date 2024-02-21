/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:52:36 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/21 11:51:57 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "tools/tools.h"
#include <stdlib.h>

static void	err(char *str, int *f)
{
	ft_putendl_fd(str, 2);
	*f = 0;
}

static int	parsing(char **map)
{
	int	f;

	f = 1;
	if (is_one(map[0]) == 0)
		err("\033[1;31m map top's is open (•)\033[0m", &f);
	if (is_s_ofone(map) == 0)
		err("\033[1;31m map sides are open (•)\033[0m", &f);
	if (is_eq_lenght(map) == 0)
		err("\033[1;31m map not rectangular (•)\033[0m", &f);
	if (sepone(map) == 0)
		err("\033[1;31m bottom's is open (•)\033[0m", &f);
	if (check_pce(map, &f) && f)
		return (1);
	else
		exit(1);
	return (0);
}

static void	checker(char *str, char **map, int *f)
{
	t_info_game	info_game;

	if (is_not_nline(str) && str)
	{
		map = ft_split(str, '\n');
		free(str);
		if (parsing(map) == 1)
			ft_switch(map, &info_game);
		else
		{
			ft_clean_str(map);
			f = 0;
		}
	}
	else
		err("\033[1;31m map must be not follow with \
	 new line or NULL (•)\033[0m", f);
}

int	main(int ac, char **av)
{
	char		*str;
	char		**map;
	int			f;

	f = 1;
	map = NULL;
	if (ac == 2 && ft_strncmp(is_vextions(av[1]), ".ber", 5) == 0)
	{
		str = get_maps(av[1]);
		checker(str, map, &f);
	}
	else
	{
		err("\033[1;31m plese respect the form abrove\033[0m", &f);
		f = -1;
	}
	if (!f)
		exit(1);
}
