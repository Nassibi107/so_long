/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:03:00 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/20 17:13:41 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include "../src/get_next_line/get_next_line.h"
# include "../src/libft/libft.h"
# include <mlx.h>
# include <unistd.h>

typedef struct info_game
{
	int		pl_py;
	int		pl_px;
	char	**map;
	char	**cp_map;
	int		l_mp;
	int		w_mp;
	void	*int_p;
	void	*win_p;
	void	*img_p;
	void	*wall;
	void	*floor;
	void	*player;
	void	*ex;
	void	*coins;
}			t_info_game;

void		ft_hooks(t_info_game *gm);
char		*get_maps(char *av);
int			is_not_nline(char *str);
int			is_s_ofone(char **str);
int			is_one(char *str);
int			is_eq_lenght(char **str);
int			check_pce(char **str, int *f);
int			check_extion(char *str);
int			*get_pl_postion(char **map);
int			*get_demof_map(char **map);
void		ft_switch(char **map, t_info_game *inf_game);
void		ft_create_gm(t_info_game *info_gm, char **map);
char		*is_vextions(char *str);
void		ft_clean_str(char **str);
void		ft_create(t_info_game *info_game);
void		ft_swap(char *a, char *b);
void		ft_down(t_info_game *gm, int *i);
void		update_ppl(t_info_game *gm);
void		ft_up(t_info_game *gm, int *i);
void		ft_left(t_info_game *gm, int *i);
void		ft_right(t_info_game *gm, int *i);
void		ft_mving(int flag, t_info_game *s);
void		ft_init(t_info_game *stc);
int			ft_col_we(char **map);
int			sepone(char **map);
void		show_me(char **map);
void		you_win(t_info_game *p);
void		ft_putmv(int *n, int f);
void		error_pce(int p, int c, int e, int f);
void		framer_fill(t_info_game *s, int px, int py, char f);
void		ft_strrcpy(char **str, char **map, int len, int wt);
#endif
