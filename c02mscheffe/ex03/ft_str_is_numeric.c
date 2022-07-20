/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:52:35 by mscheffe          #+#    #+#             */
/*   Updated: 2022/07/12 15:11:44 by mscheffe         ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	int	count;
	int	size;

	size = ft_strlen(str);
	count = 0;
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
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
