/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dups.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 23:19:52 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/21 23:19:53 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_loop(int j, int i, char **argv)
{
	int a;
	int b;

	a = j;
	b = i;
	while (++a < 9)
	{
		if (argv[i][j] != '.' && argv[i][a] != '.')
			if (argv[i][j] == argv[i][a])
				return (0);
	}
	while (++b < 9)
	{
		if (argv[i][j] != '.' && argv[b][i] != '.')
			if (argv[i][j] == argv[b][j])
				return (0);
	}
	return (1);
}

int		ft_check_dups(char **argv)
{
	int i;
	int j;

	i = 0;
	while (++i < 10)
	{
		j = -1;
		while (++j < 9)
			if (!ft_loop(j, i, argv))
				return (0);
	}
	return (1);
}
