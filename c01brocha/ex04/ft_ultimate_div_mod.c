/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brocha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:11:32 by brocha            #+#    #+#             */
/*   Updated: 2022/07/12 17:21:46 by brocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*int main()
{
	int a;
	int b;
	int *c;
	int *d;

	a = 56;
	b = 7;
	c = &a;
	d = &b;
	
	ft_ultimate_div_mod(c, d);
	printf("%d\n", a);
	printf("%d\n", b);
	return(0);
}*/
