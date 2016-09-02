/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10_04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:19:27 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/23 22:24:17 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *tad)
{
	int i;

	i = 0;
	while (tad[i] != 0)
	{
		i++;
	}
	return (i);
}

int main()
{
	int f;
	char *x[6] = {"Damn", "Your", "A", "Dic", "U", 0};

	f = ft_count_if(x, ft_strlen);
	printf("%d\n", f);
}
