/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogoncal <rogoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:26:14 by rogoncal          #+#    #+#             */
/*   Updated: 2022/07/10 14:31:37 by rogoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char *src;
// 	char *dest;
// 	char *ret;

// 	src = calloc(11, sizeof(char));
// 	src = "465314564684165464135156461564616556464515489";
// 	dest = calloc(11, sizeof(char));
// 	ret = ft_strcpy(dest, src);	
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("ret: %s\n", ret);
// 	return (0);
// }