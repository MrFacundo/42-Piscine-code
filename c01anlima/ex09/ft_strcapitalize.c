/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:14:15 by anlima            #+#    #+#             */
/*   Updated: 2022/07/06 15:23:37 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (cont == 0 && (str[cont] >= 97 && str[cont] <= 122))
		{
			str[cont] = str[cont] - 32;
		}
		else if (str[cont - 1] == ' ' && (str[cont] >= 97 && str[cont] <= 122))
		{
			str[cont] = str[cont] - 32;
		}
		cont++;
	}
	return (str);
}
