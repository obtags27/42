/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 10:24:36 by ttaggard          #+#    #+#             */
/*   Updated: 2016/09/01 10:27:23 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (dest);
}

int		main(void)
{
	char buf[20];
	char stdbuf[20];

	memset(buf, 'X', 20);
	memset(stdbuf, 'X', 20);
	buf[15] = 0;
	buf[0] = '_';
	stdbuf[15] = 0;
	stdbuf[0] = '_';
	ft_strcpy(buf + 1, "0123456789");
	strcpy(stdbuf + 1, "0123456789");
	if (memcmp(buf, stdbuf, 20))
		printf("FAIL\n");
	printf("%s", buf);
	return (0);
}
