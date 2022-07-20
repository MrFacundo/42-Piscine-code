/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 08:45:16 by mscheffe          #+#    #+#             */
/*   Updated: 2022/07/12 15:01:10 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*copia;

	copia = dest;
	while (n > 0 && *src)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		n--;
	}
	return (copia);
}