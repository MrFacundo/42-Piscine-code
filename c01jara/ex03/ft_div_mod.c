/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:47:01 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/12 10:51:49 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	divisao;
	int	resto;

	divisao = (a / b);
	resto = a % b;
	*div = divisao;
	*mod = resto;
}

/*int	main(void)
{
	int a = 12;
	int b = 3;
	int *w;
	int *z;
	w = &a;
	z = &b;

	ft_div_mod(a, b, w, z);
	printf("%d\n", *w);
	printf("%d", *z);
}*/
