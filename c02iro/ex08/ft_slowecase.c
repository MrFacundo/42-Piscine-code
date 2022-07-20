/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slowecase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iroldao- <iroldao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:02:45 by iroldao-          #+#    #+#             */
/*   Updated: 2022/07/17 16:13:07 by iroldao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_slowecase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'A' && str[cont] <= 'Z')
		{
			str[cont] = str[cont] +32;
		}
		cont++;
	}
	return (str);
}
