/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:22:21 by ftroiter          #+#    #+#             */
/*   Updated: 2022/07/07 18:19:50 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	h;

	i = 0;
	while (i <= 98)
	{
		h = i + 1;
		while (h <= 99)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			write(1, " ", 1);
			ft_putchar(h / 10 + 48);
			ft_putchar(h % 10 + 48);
			if (i != 98)
				write(1, ", ", 2);
			h++;
		}
		i++;
	}
}
