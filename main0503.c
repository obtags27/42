/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0503.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 02:51:20 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/17 02:43:30 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char dest[] = "Hello";
	char src[] = "Yello";

	printf("%s\n", ft_strcpy(dest, src));
}
