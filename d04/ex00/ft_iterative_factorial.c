/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 05:26:06 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/14 15:39:55 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int x;
	int y;

	x = 1;
	y = 1;
	if (nb > 12)
		return (0);
	while (y <= nb)
	{
		x = x * y;
		y++;
	}
	return (x);
}

int	main()
{
	printf("%d", ft_interative_factorial(5));
	return (0);
}
