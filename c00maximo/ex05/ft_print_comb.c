/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaximo <jmaximo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:13:38 by jmaximo           #+#    #+#             */
/*   Updated: 2022/07/07 14:25:40 by jmaximo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_comb(void)
{	
	int	x;
	int	y;
	int	z;

	x = '0';
	while (x <= '7')
	{
		y = x;
		while (y++, y <= '8')
		{
			z = y;
			while (z++, z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x < '7')
				{
					write(1, ", ", 2);
				}
			}
		}
		x++;
	}
}

/*
int main()
{
	ft_print_comb();
}*/
