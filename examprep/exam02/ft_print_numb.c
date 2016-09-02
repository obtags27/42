/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 02:24:30 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/26 02:33:11 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numb(void)
{
	write(1, "0123456789", 10);
}

int	main()
{
	ft_print_numb();
	ft_putchar('\n');
	return (0);
}
