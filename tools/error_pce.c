/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_pce.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:14:41 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/19 17:39:16 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	error_pce(int p, int c, int e, int f)
{
	if (f == 0)
		ft_putendl_fd("\033[1;31m map has invalid pieces (x)\033[0m", 2);
	else if (f == 1)
	{
		if (p != 1)
			ft_putendl_fd("\033[1;31m map map just need one exit (!P)\033[0m",
				2);
		if (e != 1)
			ft_putendl_fd("\033[1;31m map just need one exit (!E)\033[0m",
				2);
		if (c < 1)
			ft_putendl_fd("\033[1;31m map need at \
		 least one collectible (!C)\033[0m", 2);
	}
}
