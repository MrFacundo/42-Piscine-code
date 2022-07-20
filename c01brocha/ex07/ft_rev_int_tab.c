/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brocha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:55:44 by brocha            #+#    #+#             */
/*   Updated: 2022/07/12 18:07:08 by brocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = temp;
		i++;
	}
}

/*int tab[6] = {0, 1, 2, 3, 4, 5};
int size = 6;
ft_rev_int_tab(tab, size);
printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
return (0);*/
