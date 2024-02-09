/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_vextions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:34:12 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/09 13:01:01 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

char	*is_vextions(char *str)
{

	while (*str)
		str++;
	str--;
	while(*str)
	{
		if (*str == '.')
			return (str);
		str--;
	}
	return (str);
}
