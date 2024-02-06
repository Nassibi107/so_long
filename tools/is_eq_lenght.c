/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_eq_lenght.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:53:40 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/06 11:33:54 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	is_eq_lenght(char **str)
{
	size_t	i;
	size_t	tlen;

	tlen = ft_strlen(str[0]);
	i = 1;
	while (str[i])
	{
		if (ft_strlen(str[i]) != tlen)
			return (0);
		i++;
	}
	return (1);
}
