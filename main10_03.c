/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10_03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 20:38:39 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/24 01:09:30 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *tad)
{
	int i;

	i = 0;
	while(tad[i] != 0)
	{
		i++;
	}
	return(i);
}

int	main()
{
	char *x[5] = {"Hello", "Im", "A", "Dude", 0};
	int result = 0;

	result = ft_any(x, ft_strlen);
	printf("%d\n", result);
}
