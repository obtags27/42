/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 23:34:31 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/18 23:39:44 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int j;
	int *str;

	i = 0;
	str = (int*)malloc(sizeof(*str) * (max - min + 1));
	if (min >= max)
		return ((void*)0);
	i = min;
	j = 0;
	while (i < max - min)
	{
		str[i] = str[j];
		i++;
	}
	return (str);
}
