/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0504.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 16:33:20 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/16 16:47:48 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char src[] = "ilovewomenfromtracy";
	char dest[] = "tracywomenarefreaks";
	printf("%s\n", ft_strncpy(dest, src, 7));
}
