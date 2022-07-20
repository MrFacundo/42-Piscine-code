/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnr_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:35:03 by ftroiter          #+#    #+#             */
/*   Updated: 2022/07/17 18:21:41 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int	check_base(char *base)
{
	if (ft_strlen(base) < 1)
		return (0);
	while (*base)
	{
		if (*base == '+'
			|| *base == '-'
			|| *base == *(base + 1))
			return (0);
		base++;
	}
	return (1);
}

void	ft_putnbr_base_rec(int nbr, char *base, int length)
{
	if (nbr >= length)
		ft_putnbr_base_rec(nbr / length, base, length);
	ft_putchar(base[nbr % length]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselength;
	int	n;

	if (check_base(base))
	{
		baselength = ft_strlen(base);
		if (nbr < 0)
			n = -nbr;
		else
			n = nbr;
		ft_putnbr_base_rec(n, base, baselength);
	}
}

/*int		main(void)
{
	// base binaria
	printf("Bases binarias, n = 47. \"01\" e \"\\/\"\n");
	ft_putnbr_base(47, "01");
	ft_putchar('\n');
	printf("Esperado: 101111\n");
	ft_putnbr_base(47, "\\/");
	ft_putchar('\n');
	printf("Esperado: /\\////\n");
	// base 5
	printf("Bases 5, n = 36. \"01345\" e \"sd2ek\"\n");
	ft_putnbr_base(36, "01345");
	ft_putchar('\n');
	printf("Esperado: 131\n");
	ft_putnbr_base(36, "sd2ek");
	ft_putchar('\n');
	printf("Esperado: d2d\n");
	// base 10
	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", INT_MAX);
	ft_putnbr_base(INT_MAX, "0123456789");
	ft_putchar('\n');
	printf("Esperado: -2147483648\n");
	ft_putnbr_base(INT_MAX, ",.;\\][{}@#");
	ft_putchar('\n');
	printf("Esperado: -;.]}]@\\{]@\n");
	// base 16
	return (0);
}*/