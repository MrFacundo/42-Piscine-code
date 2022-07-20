/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogoncal <rogoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:19:26 by rogoncal          #+#    #+#             */
/*   Updated: 2022/07/10 14:36:33 by rogoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

/*#include <stdio.h>
int main()
{
	char str[50] = "asddfsdjfiosuhciuchiauhd";
	char dest[50];
	ft_strncpy(dest, str, 15);
	printf("%s\n", dest);
}*/
