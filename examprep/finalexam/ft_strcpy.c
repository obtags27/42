/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 06:45:39 by ttaggard          #+#    #+#             */
/*   Updated: 2016/09/01 06:53:03 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *s1, char *s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = *s2;
	return (s1);
}

char	*ft_strcpy(char *dest, char *src);

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
