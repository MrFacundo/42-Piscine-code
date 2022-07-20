/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogoncal <rogoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:56:14 by rogoncal          #+#    #+#             */
/*   Updated: 2022/07/09 18:03:01 by rogoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	t;

	t = 0;
	while (str[t])
	{
		if ((str[t] >= 'a') && (str[t] <= 'z'))
			t++;
		else if ((str[t] >= 'A') && (str[t] <= 'Z'))
			t++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "abCdeFgHi";
	str2 = "abCde2gHi";
	str3 = "2bCde2gHi";
	str4 = "abCde2gH2";
	printf("str1: %s, is_aplha: %d\n", str1, ft_str_is_alpha(str1));
	printf("str2: %s, is_aplha: %d\n", str2, ft_str_is_alpha(str2));
	printf("str3: %s, is_aplha: %d\n", str3, ft_str_is_alpha(str3));
	printf("str4: %s, is_aplha: %d\n", str4, ft_str_is_alpha(str4));
	return (0);
}*/
