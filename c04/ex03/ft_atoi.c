/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:14:04 by ftroiter          #+#    #+#             */
/*   Updated: 2022/07/14 23:16:09 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	contains(char start, char end, char c)
{
	if ((c >= start) && (c <= end))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	c;
	int	sign;
	int	result;

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
	return (result * sign);
}
