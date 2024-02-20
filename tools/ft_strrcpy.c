/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:19:09 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/20 16:11:04 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static char	*ft_strfill(int wt, char *map)
{
	char	*str;
	int		i;

	str = malloc(wt + 1);
	i = 0;
	while (i < wt)
	{
		str[i] = map[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	ft_strrcpy(char **str, char **map, int len, int wt)
{
	int	y;

	y = 0;
	while (y < len)
	{
		str[y] = ft_strfill(wt, map[y]);
		y++;
	}
	str[y] = NULL;
}
