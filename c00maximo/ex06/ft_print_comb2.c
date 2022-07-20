/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaximo <jmaximo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:01:58 by jmaximo           #+#    #+#             */
/*   Updated: 2022/07/07 14:26:28 by jmaximo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	c += '0';
	write(1, &c, 1);
	return ;
}

void	ft_print_comb2(void)
{	
	char	x;
	char	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar(x / 10);
			ft_putchar(x % 10);
			write(1, " ", 1);
			ft_putchar(y / 10);
			ft_putchar(y % 10);
			if (x < 98)
			{
				write(1, ", ", 2);
			}
			y++;
		}	
		x++;
	}
}

/*int main()
{
	ft_print_comb2();
}*/
