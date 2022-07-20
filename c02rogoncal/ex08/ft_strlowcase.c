/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogoncal <rogoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:23:37 by rogoncal          #+#    #+#             */
/*   Updated: 2022/07/07 20:24:52 by rogoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if ((str[t] >= 'A') && (str[t] <= 'Z'))
		{
			str[t] += 32;
		}
		t++;
	}
	return (str);
}

/*#include <stdio.h>
#include <stdlib.h>
char	*ft_strlowcase(char *str);

int	main(void)
{
	char str1[] = "abcdefghi";
	char str2[] = "AbcDefGhI";
	char str3[] = "ABCDEFGHI";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
	printf("str1_low: %s\n", str1);
	printf("str2_low: %s\n", str2);
	printf("str3_low: %s\n", str3);
	return (0);
}*/