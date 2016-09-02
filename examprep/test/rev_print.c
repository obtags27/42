/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 17:26:34 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/29 17:32:22 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int i;

	i = ac + 1;
	if (ac != 2)
		ft_putchar('\n');
	while (i >= 0  && ac == 2)
	{	
		ft_putchar(av[1][i]);
		i--;
	}
	ft_putchar('\n');
	return (0);
}
