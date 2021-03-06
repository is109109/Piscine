/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_at.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:59:12 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 20:04:34 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

char	*map_at(t_map *map, int key)
{
	int	i;

	i = 0;
	while (i < map->size)
	{
		if (map->data[i].key == key)
		{
			return (map->data[i].value);
		}
		i++;
	}
	return (0);
}
