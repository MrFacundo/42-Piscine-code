/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:27:29 by jquintin          #+#    #+#             */
/*   Updated: 2022/07/17 14:28:21 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i ++;
	}
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		j ++;
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
