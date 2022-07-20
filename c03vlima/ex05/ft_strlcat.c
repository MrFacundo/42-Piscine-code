/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vlima <Vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:40:58 by almatos           #+#    #+#             */
/*   Updated: 2022/07/14 19:10:14 by Vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char	*dest,	char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ii;
	unsigned int	iii;

	i = 0;
	while (dest[i])
		i++;
	ii = 0;
	while (src[ii])
		ii++;
	iii = 0;
	if (size <= i)
		return (ii + size);
		iii++;
	while (src[iii] && (i + iii) < size - 1)
	{
		dest[i + iii] = src[iii];
		iii++;
	}
	dest [i + iii] = '\0';
	return (i + ii);
}

int main() {

char dest[2] =  "ab";
char src[3] = "cd";
unsigned int size = 2;

int result = ft_strlcat(dest, src, size);

printf("%d", result);


}

