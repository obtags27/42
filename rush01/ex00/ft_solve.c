/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 23:20:07 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/21 23:20:09 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_backtrack(char **sudoku, int row, int col, int i)
{
	while (i < '9')
	{
		if (ft_is_empty(sudoku, row, col, i + 1))
		{
			sudoku[row][col] = i + 1;
			if (col + 1 < 9)
			{
				if (ft_solve(sudoku, row, col + 1))
					return (1);
				else
					sudoku[row][col] = '.';
			}
			else if (row + 1 < 9)
			{
				if (ft_solve(sudoku, row + 1, 0))
					return (1);
				else
					sudoku[row][col] = '.';
			}
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int		ft_solve(char **sudoku, int row, int col)
{
	int i;

	i = '0';
	if (row < 9 && col < 9)
	{
		if (sudoku[row][col] != '.')
		{
			if (col + 1 < 9)
				return (ft_solve(sudoku, row, col + 1));
			else if (row + 1 < 9)
				return (ft_solve(sudoku, row + 1, 0));
			else
				return (1);
		}
		else
		{
			if (ft_backtrack(sudoku, row, col, i))
				return (1);
		}
		return (0);
	}
	else
		return (1);
}
