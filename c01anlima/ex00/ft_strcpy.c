/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:58:16 by anlima            #+#    #+#             */
/*   Updated: 2022/07/06 18:05:57 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	cont;

	cont = 0;
	while (src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}
