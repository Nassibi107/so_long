/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_s_ofone.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:53:20 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/19 10:39:47 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static int	is_wall(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = ft_strlen(str);
	if (str[i - 1] == '1' && str[0] == '1')
		return (1);
	return (0);
}

int	is_s_ofone(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_wall(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
