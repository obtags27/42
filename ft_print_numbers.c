/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 13:25:48 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/12 14:30:35 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	int x;

	x = '0';
	while (x <='9')
	{
		ft_putchar(x);
		x++;
	}
}

int		main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}
