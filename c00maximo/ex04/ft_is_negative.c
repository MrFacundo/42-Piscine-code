/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaximo <jmaximo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:19:58 by jmaximo           #+#    #+#             */
/*   Updated: 2022/07/07 14:33:36 by jmaximo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}	
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	return ;
}

/*int main()
{	
	ft_is_negative(-1+1);
	
}*/