/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:10:56 by ftroiter          #+#    #+#             */
/*   Updated: 2022/07/09 19:59:03 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < size / 2)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/* 
int	main(void)
{
	int *tab;
	int counter;

	tab = calloc(10, sizeof(int));
	counter = 0;
	while (counter < 10)
	{
		tab[counter] = counter;
		counter++;
	}
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 10);
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	return (0);
} */