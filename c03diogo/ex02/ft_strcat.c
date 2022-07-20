/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:11:13 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/07/14 14:03:57 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *dest;
	char *src;
	src = calloc(6, sizeof(char));
	dest = calloc(12, sizeof(char));
	strcpy(src, "World");
	strcpy(dest, "Hello ");
	printf("Destination = %s\n", dest);
	printf("Source = %s\n", src);
	ft_strcat(dest, src);
	printf("Both together = %s\n", dest);
} */
