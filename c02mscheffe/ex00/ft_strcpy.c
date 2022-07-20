/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:36:58 by mscheffe          #+#    #+#             */
/*   Updated: 2022/07/12 14:49:08 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strcpy(char *dest, char *src)
{

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int main (){
	
	char str1[4] = "abc";
	char str2[4];
	
	ft_strcpy(str1, str2);
}