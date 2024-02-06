/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:44:37 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/01 11:25:57 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	err1(void)
{
	ft_putendl_fd("Error", 2);
	exit(1);
}

long	ft_atoi(const char *str)
{
	int		i;
	int		s;
	long	rst;

	s = 1;
	rst = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			s *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		if (rst > INT_MAX || rst < INT_MIN)
			err1();
		rst *= 10;
		rst += str[i] - '0';
		i++;
	}
	return (rst * s);
}
