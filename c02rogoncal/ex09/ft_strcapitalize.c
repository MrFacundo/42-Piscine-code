/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogoncal <rogoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:10:00 by rogoncal          #+#    #+#             */
/*   Updated: 2022/07/10 17:02:08 by rogoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	t;
	int	c;

	c = 0;
	t = 0;
	while (str[t] != '\0')
	{
		if (c == 0 && (str[t] >= 'a' && str[t] <= 'z'))
		{
			str[t] -= 32;
			c++;
		}
		else if (c > 0 && (str[t] >= 'A' && str[t] <= 'Z'))
			str[t] += 32;
		else if ((str[t] < '0') || (str[t] > '9' && str[t] < 'A')
			|| (str[t] > 'Z' && str[t] < 'a') || (str[t] > 'z'))
			c = 0;
		else
			c++;
		t++;
	}
	return (str);
}

/*#include <stdio.h>

char	*ft_strcapitalize(char *str);

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
}*/