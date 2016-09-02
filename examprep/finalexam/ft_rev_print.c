/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 06:59:40 by ttaggard          #+#    #+#             */
/*   Updated: 2016/09/01 08:06:53 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int i;

	i  = ft_strlen(av[1]) - 1;
	if (ac == 2)
	{	
		while (i >= 0)
		{	
			ft_putchar(av[1][i]);
			i--;
			printf(" ival: %d", i); 
		}
	}	
	ft_putchar('\n');
	return (0);
}
