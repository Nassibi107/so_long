/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_maps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:52:07 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/20 18:55:09 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <stdlib.h>

static int	par(char *str)
{
	int	fm;

	fm = open(str, O_RDONLY);
	return (fm);
}

static char	*get_string_map(char *str, char *s, int fm)
{
	while (1337)
	{
		s = get_next_line(fm);
		if (!s)
			break ;
		if (s[0] == '\n' && s[1] == '\0')
		{
			free(str);
			free(s);
			return (0x0);
		}
		str = ft_strjoin(str, s);
		free(s);
	}
	return (str);
}

char	*get_maps(char *av)
{
	char			*str;
	char			*s;
	int				fm;

	fm = -1;
	s = NULL;
	str = malloc(1);
	str[0] = '\0';
	if (!str)
		return (0x0);
	if (par(av) != -1)
		fm = par(av);
	else
	{
		free(str);
		ft_putendl_fd("\033[1;31m file not found ! \033[0m", 2);
		exit (1);
	}
	return (get_string_map(str, s, fm));
}
