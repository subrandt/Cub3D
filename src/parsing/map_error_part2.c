/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_error_part2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:39:51 by retcheba          #+#    #+#             */
/*   Updated: 2023/01/10 11:25:16 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"

int	map_error_part2(t_game *game)
{
	(void)game;
	/*
	Vérifier:
	-	les paths pour les textures
	-	les couleurs
	-	la map (format fichier + extension, si y a que des caractères valides, 
		bien fermé par des 1,
		1 seule position de départs) -> recupérer len_x et len_y (de la map) 
		et récupérer aussi x et y (du player)
	
	if (pas bon)
	{
		free(game->path_to_the_north_texture);
		free(game->path_to_the_south_texture);
		free(game->path_to_the_west_texture);
		free(game->path_to_the_east_texture);
		free(game->floor_color);
		free(game->ceiling_color);
		free_tab(game->map);
		return (1);
		}
	*/
	return (0);
}
