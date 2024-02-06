/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:22:57 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/06 11:35:49 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include "../src/get_next_line/get_next_line.h"
# include "../src/libft/libft.h"

char	*get_maps(char *av);
int		is_not_nline(char *str);
int		is_s_ofone(char **str);
int		is_one(char *str);
int		is_eq_lenght(char **str);

#endif
