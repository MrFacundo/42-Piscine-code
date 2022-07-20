/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:21:07 by ftroiter          #+#    #+#             */
/*   Updated: 2022/07/11 21:27:24 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	contains(char start, char end, char c)
{
	if ((c >= start) && (c <= end))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (contains('a', 'z', str[i]) || contains('A', 'Z', str[i]))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/* int main()
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "abCdeFgHi";
	str2 = "abCde2gHi";
	str3 = "23456";
	str4 = "abCde2gH2";
	printf("str1: %s, is_aplha: %d\n", str1, ft_str_is_alpha(str1));
	printf("str2: %s, is_aplha: %d\n", str2, ft_str_is_alpha(str2));
	printf("str3: %s, is_aplha: %d\n", str3, ft_str_is_alpha(str3));
	printf("str4: %s, is_aplha: %d\n", str4, ft_str_is_alpha(str4));
	return (0);

}

 */
