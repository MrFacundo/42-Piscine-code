/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:31:33 by ftroiter          #+#    #+#             */
/*   Updated: 2022/07/10 20:31:37 by ftroiter         ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (contains('a', 'z', str[i]))
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
	str1 = "abcdefghi";
	str2 = "Abcdefghi";
	str3 = "abc:efghi";
	str4 = "abcdefgh2";
	printf("str1: %s, is_lowercase: %d\n", str1, ft_str_is_lowercase(str1));
	printf("str2: %s, is_lowercase: %d\n", str2, ft_str_is_lowercase(str2));
	printf("str3: %s, is_lowercase: %d\n", str3, ft_str_is_lowercase(str3));
	printf("str4: %s, is_lowercase: %d\n", str4, ft_str_is_lowercase(str4));
	return (0);
} */