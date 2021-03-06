/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:42:52 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/26 08:33:24 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	else if ((power < 0) || ((nb == 0) && (power != 0)))
		return (0);
	else if (power == 1)
		return (nb);
	else
	{
		power--;
		return (nb * ft_recursive_power(nb, power));
	}
}
/*
#include <stdio.h>
int main()
{

printf ("%d\n", ft_recursive_power(3,3));
}
*/
