/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:55:36 by mscheffe          #+#    #+#             */
/*   Updated: 2022/07/12 17:54:08 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	read_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return (3);
	if (c >= 'A' && c <= 'Z')
		return (2);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	last;

	last = ' ';
	while (*str)
	{
		if (read_char(last) == 0 && read_char(*str) == 3)
			*str -= 32;
		else if (read_char(last) == 1 && read_char(*str) == 2)
			*str += 32;
		else if (read_char(last) == 2 && read_char(*str) == 2)
			*str += 32;
		else if (read_char(last) == 3 && read_char(*str) == 2)
			*str += 32;
		last = *str;
		str++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char str1[] = "alo maluco 42beleza!";
	char str2[] = "ALO MALUCO 42BELEZA!";
	char str3[] = "alo+ma|uco a2beleza!";
	char str4[] = "ALO+MALUCO*a2BELEZA!";
	char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
	char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";

	printf("str1: %s\n", str1);
	ft_strcapitalize(str1);
	printf("str1_c: %s\n", str1);
	printf("str2: %s\n", str2);
	ft_strcapitalize(str2);
	printf("str2_c: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strcapitalize(str3);
	printf("str3_c: %s\n", str3);
	printf("str4: %s\n", str4);
	ft_strcapitalize(str4);
	printf("str4_c: %s\n", str4);
	printf("str5: %s\n", str5);
	ft_strcapitalize(str5);
	printf("str5_c: %s\n", str5);
	printf("str6: %s\n", str6);
	ft_strcapitalize(str6);
	printf("str6_c: %s\n", str6);
	return (0);
}