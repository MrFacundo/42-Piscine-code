/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:00:28 by ftroiter          #+#    #+#             */
/*   Updated: 2022/07/14 18:53:12 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
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

char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	if (!*to_find)
		return (str);
	j = 0;
	while (*str)
	{
		if (*str != to_find[j])
			j = 0;
		else
		{
			j++;
			if (j == ft_strlen(to_find))
			{
				return (str - (ft_strlen(to_find) - 1));
			}
		}
		str++;
	}
	return (0);
}
