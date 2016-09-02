/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 04:33:46 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/23 16:00:54 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *return_array;

	return_array = (int*)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		return_array[i] = f(tab[i]);
		i++;
	}
	return (return_array);
}
