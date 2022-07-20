/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iroldao- <iroldao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:19:31 by iroldao-          #+#    #+#             */
/*   Updated: 2022/07/17 16:05:06 by iroldao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'A' && str[cont] <= 'Z')
		{
			cont++;
		}
		else
			return (0);
	}
	return (1);
}
