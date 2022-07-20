/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:53:50 by mscheffe          #+#    #+#             */
/*   Updated: 2022/07/12 18:27:47 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	i;

	src_size = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (*src && i < (size - 1))
		{
			*dest = *src;
			src++;
			dest++;
			i++;
		}
		*dest = '\0';
	}
	return (src_size);
}
