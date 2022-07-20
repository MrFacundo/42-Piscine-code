/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:10:44 by anlima            #+#    #+#             */
/*   Updated: 2022/07/06 20:04:16 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	l;

	l = 0;
	while (src[l] != '\0' && l < n)
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}
