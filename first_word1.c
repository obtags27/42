/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 16:21:41 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/31 16:59:02 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] =='\n' || str[i] =='\t')
		i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	while (i != 1 && ac == 2)
	{
		ft_putstr(av[1]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
