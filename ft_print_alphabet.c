/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 11:39:16 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/11 23:04:49 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		 ft_putchar(char c)
{
	write (1, &c, 1);
	return(0);	
}

void 	ft_print_alphabet(void)
{	
	char x;

	x = 'z';
	while (x >= 'a')	
	{	
		ft_putchar(x);
		x--;
	}	
}	

int	main()
{	
	ft_print_alphabet();
	return(0);
}
