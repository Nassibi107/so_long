/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:22:57 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/12 11:40:04 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include "../src/get_next_line/get_next_line.h"
# include "../src/libft/libft.h"
# include <mlx.h>

typedef struct	info_game {
	int	pl_py;
	int	pl_px;
	char	**map;
	char	**cp_map;
	int	l_mp;
	int	w_mp;
	void	*int_p;
	void	*win_p;
	void	*img_p;
	void	*wall;
	void	*floor;
	void	*player;
	void	*ex;
	void	*coins;
}	t_info_game;

char	*get_maps(char *av);
int		is_not_nline(char *str);
int		is_s_ofone(char **str);
int		is_one(char *str);
int		is_eq_lenght(char **str);
int		check_pce(char **str);
int		check_extion(char *str);
void	framer_fill (t_info_game *s, int px, int py);
int	*get_pl_postion(char **map);
int	*get_demof_map(char **map);
void	ft_switch(char **map, t_info_game *inf_game);
char	*is_vextions(char *str);
void	ft_create_gm(t_info_game *info_gm);
void	ft_clean_str(char **str);
void	ft_create(t_info_game *info_game);
#endif
