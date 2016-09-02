/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 23:18:49 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/21 23:18:52 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	char	**sudoku;
	int		i;
	int		j;

	sudoku = (char**)malloc(sizeof(char*) * 9);
	i = 1;
	if (argc == 10 && ft_count_filled(argv) && ft_check_dups(argv))
	{
		while (i < 10)
		{
			sudoku[i - 1] = (char*)malloc(sizeof(char) * 9);
			j = -1;
			while (++j < 9)
				sudoku[i - 1][j] = argv[i][j];
			i++;
		}
		if (ft_solve(sudoku, 0, 0))
			ft_print_sudoku(sudoku);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
