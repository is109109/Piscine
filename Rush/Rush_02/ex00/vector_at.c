/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 10:41:14 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 12:56:44 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

char	*vector_at(t_vector *vec, unsigned int idx)
{
	if (idx < vec->size)
	{
		return (&vec->data[idx]);
	}
	return (0);
}
