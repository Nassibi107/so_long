/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_maps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:52:07 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/19 12:50:58 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

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
			return (0x0);
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
	return (get_string_map(str, s, fm));
}
