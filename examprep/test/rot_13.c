/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 06:45:16 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/29 06:57:10 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rot_13(char c)
{
	char base;

	if (c >= 'a' && c <= 'z')
		base = 'a';
	else if (c >= 'A' && c <= 'Z')
		base = 'Z';
	else
		return (c);
	return((((c - base) % 26) + 13) + base);	
}

int	main(int ac, char **av)
{
	char *str;

	if (ac == 2)
	{
		str = av[1];
		while (*str)
		{
			ft_putchar(rot_13(*str));
			str++;
		}
	}
	ft_putchar('\n');
	return (0);
}
