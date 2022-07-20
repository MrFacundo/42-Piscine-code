/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:11:45 by mscheffe          #+#    #+#             */
/*   Updated: 2022/07/12 18:40:26 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	hexaconvert(char *str)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write(1, &hexa[*str / 16], 1);
	write(1, &hexa[*str % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != str[ft_strlen(str)])
	{
		if (*str < 32 || *str == 127)
		{
			write(1, "\\", 1);
			hexaconvert(str);
		}
		else
			write(1, str, 1);
		str++;
	}
}

#include <unistd.h>


int	main(void)
{
	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}