/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iroldao- <iroldao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:22:22 by iroldao-          #+#    #+#             */
/*   Updated: 2022/07/17 15:55:40 by iroldao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	l;

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
