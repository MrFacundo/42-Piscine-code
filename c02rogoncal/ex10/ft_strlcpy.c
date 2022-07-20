/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogoncal <rogoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:39:17 by rogoncal          #+#    #+#             */
/*   Updated: 2022/07/10 17:02:00 by rogoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcount(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	t;
	unsigned int	count;

	count = ft_strcount(src);
	t = 0;
	if (size != 0)
	{
		while (src[t] != '\0' && t < size -1)
		{
		dest[t] = src[t];
		t++;
		}
		dest[t] = '\0';
	}
	return (count);
}

/*#include <stdio.h>
#include <stdlib.h>

int				main(void)
{
	int 	src_size;
	char 	*src;
	char 	*dest;

	src = calloc(11, sizeof(char));
	dest = calloc(8, sizeof(char));
	src = "1234567890";
	src_size = ft_strlcpy(dest, src, 6);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n", src_size);
	return(0);
}*/