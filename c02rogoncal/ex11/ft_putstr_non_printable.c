/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogoncal <rogoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:35:55 by rogoncal          #+#    #+#             */
/*   Updated: 2022/07/10 17:48:23 by rogoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexadecimal(int t)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write(1, &hexa[t / 16], 1);
	write(1, &hexa[t % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] < 32 || str[t] == 127)
		{
			write(1, "\\", 1);
			hexadecimal(str[t]);
		}
		else
		{
			write(1, &str[t], 1);
		}
		t++;
	}
}

/*int	main(void)
{
	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}*/