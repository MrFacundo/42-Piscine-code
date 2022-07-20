/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:24:07 by ftroiter          #+#    #+#             */
/*   Updated: 2022/07/17 18:24:09 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
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

int	contains(char start, char end, char c)
{
	if ((c >= start) && (c <= end))
		return (1);
	else
		return (0);
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

int	ft_atoi_base(char *str, char*base)
{
	int	c;
	int	sign;
	int	result;

    if (!check_base(base))
        return 0;
	c = 0;
	sign = 1;
	result = 0;
	while (contains('\t', '\r', str[c]) || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sign *= -1;
		c++;
	}
	while (contains('0', '9', str[c]))
	{
		result = (str[c] - '0') + (result * 10);
		c++;
	}
	ft_putnbr_base((result * sign), base);
    return 0;
}

int main () {
    ft_atoi_base("  -1235", "0123456789");
} */