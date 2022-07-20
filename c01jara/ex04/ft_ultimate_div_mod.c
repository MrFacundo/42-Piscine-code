/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:11:48 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/12 11:31:27 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divisao;
	int	resto;

	divisao = (*a / *b);
	resto = *a % *b;
	*a = divisao;
	*b = resto;
}

/*int	main(void)
{
	int x = 12;
	int z = 4;
	int *a;
	int *b;

	a = &x;
	b = &z;

	ft_ultimate_div_mod(a, b);
	printf("%d\n%d", *a, *b);
}*/
