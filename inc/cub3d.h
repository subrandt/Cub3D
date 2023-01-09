/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:34:00 by retcheba          #+#    #+#             */
/*   Updated: 2023/01/06 17:35:22 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "mlx.h"
# include "../libft/inc/libft.h"
# include <fcntl.h>
# include <stdio.h>

# define ESC 65307
# define W 119
# define S 115
# define A 97
# define D 100

typedef struct s_img_data
{
	void	*img;
	char	*addr;
	int		bpp;
	int		line_length;
	int		endian;
}	t_img_data;

typedef struct s_game
{
	char		*map_name;
	void		*mlx;
	void		*win;
	int			win_width;
	int			win_height;
	char		**map;
	char		*path_to_the_north_texture;
	char		*path_to_the_south_texture;
	char		*path_to_the_west_texture;
	char		*path_to_the_east_texture;
	char		*floor_color;
	char		*ceiling_color;
	int			f_color;
	int			c_color;
	int			x;
	int			y;
	int			len_x;
	int			len_y;
	int			cell_size;
	t_img_data	mini_map;
}	t_game;

//	MAIN FUNCTIONS
int		ft_close(t_game *game);
int		ft_keypress(int keycode, t_game *game);
void	ft_init_mini_map(t_game *game, t_img_data *mini_map);
void	ft_draw_squares(t_game *game, t_img_data *mini_map, int cell_size);
void	ft_draw_grid(t_img_data *mini_map, int len_y, int len_x, int cell_size);
//	PARSING
void	ft_parsing(t_game *game);
int		map_error_part1(int argc, char **argv, t_game *game);
int		map_error_part2(t_game *game);
//	TOOLS
void	my_mlx_pixel_put(t_img_data	*data, int x, int y, int color);
int		ft_strstr(char *str, char *to_find);
void	free_tab(char **tab);
void	ft_free_var_and_exit(t_game *game, char **tab, char *tmp);

#endif
