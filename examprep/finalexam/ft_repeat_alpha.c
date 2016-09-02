/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 10:46:18 by ttaggard          #+#    #+#             */
/*   Updated: 2016/09/01 11:04:41 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat_alpha(char c)
{
	int i;

	if (c <= 'Z')
		i = c - 'A';
	else
		i = c - 'a';
	while (i != 0)
	{
		write(1, &c, 1);
		i--;
	}
}

int		main(int ac, char **av)
{
	int i;
	
	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'B' && av[1][i] <= 'Z')
				ft_repeat_alpha(av[1][i]);
			else if (av[1][i] >= 'b' && av[1][i] <= 'z')
				ft_repeat_alpha(av[1][i]);
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
