/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 03:39:37 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/26 03:50:09 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char rot_13(char c)
{
	char base;
	if (c >= 'a' && c <= 'z')
		base = 'a';
	else if (c >= 'A' && c <= 'Z')
		base = 'A';
	else
		return (c);
	return ((((c-base) + 13) % 26) + base);
}
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int main(int argc, char **argv)
{
	char *str;

	if (argc == 2)
	{
		str = argv[1];
		while (*str)
		{
			ft_putchar(rot_13(*str));
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
