/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 08:23:18 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/06 08:23:21 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[0] >= 'a' && str[0] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] -32;
		}
		i++;
	}
	return (str);
}
