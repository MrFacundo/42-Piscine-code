/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brocha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:05:25 by brocha            #+#    #+#             */
/*   Updated: 2022/07/12 17:18:11 by brocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 25;
	b = 4;
	div = &a;
	mod = &b;	
	ft_div_mod( a, b, div, mod);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", *div);
	printf("%d\n", *mod);
							
	return(0);
}*/
