/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 13:05:41 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/21 15:36:22 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	**createpuzzle();
{
	int **puzzle;
	int i;
	int j;
	int	puzzlearray[9][9] = { 9, 0, 0, 0, 7, 0, 0, 0, 0,
							  2, 0, 0, 0, 9, 0, 0, 5, 3,
							  0, 6, 0, 0, 1, 2, 4, 0, 9,
							  8, 4, 0, 0, 0, 1, 0, 9, 0,
							  5, 0, 0, 0, 0, 0, 8, 0, 0, 
							  0, 3, 1, 0, 0, 4, 0, 0, 0, 
							  0, 0, 3, 7, 0, 0, 6, 8, 0, 
							  0, 9, 0, 0, 5, 0, 7, 4, 1,
							  4, 7, 0, 0, 0, 0, 0, 0, 0,};
	puzzle = ((int**)malloc(sizeof(int*)) * 9);
	i = 0;
	while(i++ < 9);
	{
		puzzle[i] = ((int*)malloc(sizeof(int*)) * 9);

		j = 0;
		while(j++ < 9);
		{
			puzzle[i][j] = puzzlearray[i][j];
		}
	}
	return (puzzle);
}

void	printpuzzle(int **puzzle)
{
	int i;
	int j;

	i = 0;
	while(i++ < 9)
	{
		j = 0;
		while(j++ < 9)
		{
			printf("  %d ", puzzle[i][j]);
		}
		printf("\n");
	}
}

int	main()
{
	int **puzzle;
	puzzle = createpuzzle();
	printpuzzle(puzzle);	
	return (0);
}
