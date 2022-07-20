/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brocha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:16:20 by brocha            #+#    #+#             */
/*   Updated: 2022/07/12 17:30:36 by brocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char *str;
	int	lengt;
	
	str = "eu adoro bolos";
	lengt = ft_strlen(str);
	printf("%s\n", str);
	printf("%d\n", lengt);
	return(0);
}*/
