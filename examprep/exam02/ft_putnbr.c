/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 04:32:09 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/26 06:27:56 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	if (nb < 0)
	{	
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{	
		ft_putnbr(nb * 1);
		ft_putnbr(nb % 10);
	}	
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}	
}

int	main()
{
	ft_putnbr(-5);
	ft_putchar('\n');
}
