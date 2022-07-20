/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vlima <Vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:25:13 by almatos           #+#    #+#             */
/*   Updated: 2022/07/14 19:10:19 by Vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	ii;

	i = 0;
	while (dest[i])
		i++;
	ii = 0;
	while (src[ii])
	{
		dest[i] = src [ii];
		i++;
		ii++;
	}
	dest[i] = '\0';
	return (dest);
}