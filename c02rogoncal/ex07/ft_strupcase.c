/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogoncal <rogoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:11:18 by rogoncal          #+#    #+#             */
/*   Updated: 2022/07/07 20:21:21 by rogoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if ((str[t] >= 'a') && (str[t] <= 'z'))
		{
			str[t] -= 32;
		}
		t++;
	}
	return (str);
}

/*#include <stdio.h>
#include <stdlib.h>
char	*ft_strupcase(char *str);

int	main(void)
{
	char str1[] = "abcdefghi";
	char str2[] = "AbcDefGhI";
	char str3[] = "ABCDEFGHI";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	return (0);
}*/