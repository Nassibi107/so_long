/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_extion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:34:03 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/06 15:40:24 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	check_extion(char *str)
{
	char *tk = ft_strnstr(str, ".ber", ft_strlen(str));

	if (ft_strncmp(tk, ".ber", ft_strlen(tk)) == 0)
		return (1);
	return (0);
}
