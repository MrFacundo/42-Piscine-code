/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:56:32 by ftroiter          #+#    #+#             */
/*   Updated: 2022/07/14 22:42:26 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	slen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, int size)
{
	int	srclength;
	int	offset;
	int	index;

	srclength = slen(src);
	offset = slen(dest);
	index = 0;
	if (size <= slen(dest))
		return (size + srclength);
	while (src[index] && index < srclength)
	{
		dest[offset] = src[index];
		index++;
		offset++;
		if (offset == size - 1)
		{
			break ;
		}
	}
	dest[offset] = '\0';
	return ((unsigned int)slen(dest) + (unsigned int)slen(&src[index]));
}
