/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:32:47 by ada-cost          #+#    #+#             */
/*   Updated: 2022/07/16 16:00:49 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	while (*argv[0] != '\0')
	{
		put_char(*argv[0]);
		argv[0]++;
	}
	write(1, "\n", 1);
	return (0);
}
