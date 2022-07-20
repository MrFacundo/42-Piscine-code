/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:29:53 by anlima            #+#    #+#             */
/*   Updated: 2022/07/06 15:02:52 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] <= 64)
		{
			return (0);
		}
		else if ((str[cont] >= 91 && str[cont] <= 96) || str[cont] >= 123)
		{
			return (0);
		}
		cont++;
	}
	return (1);
}
