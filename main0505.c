/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0505.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 20:16:45 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/17 12:05:22 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char str[] = "ststop";
	char to_find[] = "st";
	printf("%s\n", ft_strstr(str, to_find));
}
