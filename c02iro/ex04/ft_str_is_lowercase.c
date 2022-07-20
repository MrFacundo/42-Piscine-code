/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iroldao- <iroldao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:06:51 by iroldao-          #+#    #+#             */
/*   Updated: 2022/07/16 18:51:24 by iroldao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
		{
			cont++;
		}
		else
			return (0);
	}
	return (1);
}
