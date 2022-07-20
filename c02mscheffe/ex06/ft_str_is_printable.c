/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:32:46 by mscheffe          #+#    #+#             */
/*   Updated: 2022/07/12 15:21:19 by mscheffe         ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	count;
	int	size;

	size = ft_strlen(str);
	count = 0;
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str > 31 && *str != 127)
		{
			count++;
			if (count == size)
				return (1);
		}
		else
			return (0);
		str++;
	}
	return (0);
}
