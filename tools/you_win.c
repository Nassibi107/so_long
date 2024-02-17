/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   you_win.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:29:02 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/17 18:08:31 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <unistd.h>

void	you_win(t_info_game *p)
{
	(void) p;
	// ft_clean_str(p->cp_map);
	// ft_clean_str(p->map);
	write(1,"\033[1;32m \
	YOU WIN v_v\033[0m\n",30);
	exit(1);
}
