/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:06:24 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/18 18:37:15 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_putmv(int *n, int f)
{
	if (f == 123)
	{
		write(1, "\033[1;34m letf : \t",19);
		ft_putnbr_fd(*n, 1);
		write(1,"\n",1);
	}
	else if (f == 124)
	{
		write(1, "\033[1;34m right : \t",20);
		ft_putnbr_fd(*n, 1);
		write(1,"\n",1);
	}
	else if (f == 125)
	{
		write(1, "\033[1;34m down : \t",19);
		ft_putnbr_fd(*n, 1);
		write(1,"\n",1);
	}
	else if (f == 126)
	{
		write(1, "\033[1;34m up : \t",17);
		ft_putnbr_fd(*n, 1);
	}
	*n += 1;
}
