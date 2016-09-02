/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 02:41:21 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/31 20:44:15 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{	
	char *str;
	
	str = dest;
	while(*str != '\0')
	{
		*str = *src;
		str++;
		src++;
	}
	return (dest);
}

while ((*src++  == *dest++)
		;
