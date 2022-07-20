/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:06:28 by ftroiter          #+#    #+#             */
/*   Updated: 2022/07/19 20:25:52 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 5;
	if (nb <= 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (nb % i != 0 && i <= nb / 2)
		i += 2;
	if (i >= nb / 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (!ft_is_prime(i))
	{
		i++;
	}
	return (i);
}
/* 
int		main(void)
{

    int i = 1;
	printf("%d, %d\n", i, ft_find_next_prime(i));
	return (0);
}
 */