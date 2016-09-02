/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_z.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 03:59:15 by ttaggard          #+#    #+#             */
/*   Updated: 2016/09/01 02:57:02 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{	
	if (ac != 2) //if the number of parameters isn't 1, display 'a' followed
	{			// by a new line	
		ft_putchar('z');
		ft_putchar('\n');
		return (0);
	}
	while (*av[1])
	{	
		ft_putchar('z');
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('\n');
	return (0);
}
