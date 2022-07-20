/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:14:50 by anlima            #+#    #+#             */
/*   Updated: 2022/07/06 22:12:01 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] < 97 || str[cont] > 122)
		{
			return (0);
		}
		cont++;
	}
	return (1);
}


int main ()
{
	int i;
	i = ft_str_is_lowercase("adsu`");
	printf("%d", i);
	

}
