/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brocha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:30:33 by brocha            #+#    #+#             */
/*   Updated: 2022/07/12 17:16:17 by brocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int main()
{
	int c;
	int d;
	int *a;
	int *b;

	c = '0';
	d = '3';
	a = &c;
	b = &d;

	printf("%d\n", *a);
	printf("%d\n", *b);
	ft_swap(a, b);

	printf("%d\n", *a);
	printf("%d\n", *b);
	return(0);
}*/
