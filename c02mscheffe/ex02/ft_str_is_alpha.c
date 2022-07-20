/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 13:14:15 by mscheffe          #+#    #+#             */
/*   Updated: 2022/07/12 15:05:53 by mscheffe         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	count;
	int	size;

	size = ft_strlen(str);
	count = 0;
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
		{
			count++;
			if (count == size)
				return (1);
		}
		str++;
	}
	return (0);
}
