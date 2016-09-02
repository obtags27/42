/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_empty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 23:19:18 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/21 23:19:20 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	ft_is_empty(char **sudoku, int row, int col, char num)
{
	int i;
	int j;
	int s_row_begin;
	int s_col_begin;

	i = 0;
	while (i < 9)
	{
		if (sudoku[row][i] == num || sudoku[i][col] == num)
			return (0);
		i++;
	}
	s_row_begin = (row / 3) * 3;
	s_col_begin = (col / 3) * 3;
	i = s_row_begin - 1;
	while (++i < s_row_begin + 3)
	{
		j = s_col_begin - 1;
		while (++j < s_col_begin + 3)
		{
			if (sudoku[i][j] == num)
				return (0);
		}
	}
	return (1);
}
