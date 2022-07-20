/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaximo <jmaximo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:43:37 by jmaximo           #+#    #+#             */
/*   Updated: 2022/07/06 21:17:04 by jmaximo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	c += '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar(-3);
		ft_putchar(2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar(-3);
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb);
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/*int main()
{
	ft_putnbr(-2147483648);
}*/