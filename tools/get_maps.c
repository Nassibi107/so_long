/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_maps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:52:07 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/09 16:30:19 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static int	par(char *str)
{
	int	fm;

	fm = open(str, O_RDONLY);
	return (fm);
}

char	*get_maps(char *av)
{
	char		*str;
	char		*s;
	int			fm;

	str = malloc(1);
	str[0] = '\0';
	if (!str)
		return (0x0);
	if (par(av) != -1)
		fm = par(av);
	else
	{
		free(str);
		return (0x0);
	}
	while (1337)
	{
		s = get_next_line(fm);
		if (!s)
		{
			free(s);
			break ;
		}
		str = ft_strjoin(str, s);
		free(s);
	}
	return (str);
}
