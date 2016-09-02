/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush000.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 00:56:25 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/17 01:56:39 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	width(int x)
{
	int j;
	char a;
	char b;
	char c;

	j = 1;
	a = 'A';
	b = 'B';
	c = 'C';
	while(j <= x)
	{
		if(j == 1)
			ft_putchar(a);
		if(j == 1 && x == 1)
			ft_putchar('\n');
		if(j == x && x != 1)
		{	ft_putchar(c);
			ft_putchar('\n');
		}
		else if(j != 1 && j < x)
			ft_putchar(b);
		j++;
	}
}

void	length(int x)
{
	int j;
	char b;
	char d;

	j = 1;
	b = 'B';
	d = ' ';
	while(j <= x)
	{
		if(j == 1)
			ft_putchar(b);
		if(j == 1 && x == 1)
			ft_putchar('\n');
		if(j == x && x != 1)
		{	ft_putchar(b);
			ft_putchar('\n');
		}
		else if(j != 1 && j < x)
			ft_putchar(d);
		j++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	while(i <= y)
	{
		if(i == 1 || i == y)
		{
			width(x);
		}
		else
			length(x);
		i++;
	}
}

int	main()
{
	rush(5,5);
	return(0);
}
