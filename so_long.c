/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:52:36 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/07 15:42:57 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "src/libft/libft.h"
#include "tools/tools.h"
#include <stdio.h>

static void	err(void)
{
	ft_putendl_fd("Error",2);
	exit(1);
}

static int parsing (char **map)
{
	if (is_one(map[0]) && is_s_ofone(map) && is_eq_lenght(map))
	{
		if (check_pce(map))
			return (1);
	}
	return (0);
}

int	main(int ac,char **av)
{
	char	*str;
	char	**map;


	if (ac == 2 && check_extion(av[1]))
	{
		str = get_maps(av[1]);
		if (is_not_nline(str))
		{
			map = ft_split(str,'\n');
			if (parsing(map))
			{
				ft_switch(map);
			}
			else
				err();
		}
		else
			err();
	}
	else
		err();

}
