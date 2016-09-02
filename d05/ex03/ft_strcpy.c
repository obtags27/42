/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 02:41:21 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/17 12:00:05 by ttaggard         ###   ########.fr       */
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

int	main(void)
{
	char dest[] = "Helloooo";
	char src[] = "Yello";

	if (dest[7] == 'o')
		printf("It works %c", dest[7]);
	printf("%s\n", ft_strcpy(dest, src));
}
