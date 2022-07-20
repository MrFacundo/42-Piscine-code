/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:18:43 by ftroiter          #+#    #+#             */
/*   Updated: 2022/07/19 20:12:46 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;

	if (nb == 1)
		return (1);
	result = 1;
	while (result <= nb / 2)
	{
		if (result * result < nb)
			result++;
		else if (result * result == nb)
			return (result);
		else if (result * result > nb)
			return (0);
	}
	return (0);
}
