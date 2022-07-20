/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vlima <Vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:05:59 by Vlima             #+#    #+#             */
/*   Updated: 2022/07/14 13:46:26 by Vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i1;

	i = 0;
	i1 = 0;
	while (dest[i] != '\0')
	{
		i++;
	}		
	while (i1 < nb && src[i1] != '\0' )
	{
		dest[i + i1] = src[i1];
		i1++;
	}
	dest[i + i1] = '\0';
	return (dest);
}
