/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:18:29 by jquintin          #+#    #+#             */
/*   Updated: 2022/07/17 14:32:23 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j])
			j ++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i ++;
		j = 0;
	}
	return (0);
}
