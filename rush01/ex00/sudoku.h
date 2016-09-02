/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 23:21:46 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/21 23:21:47 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_print_sudoku(char **sudoku);
int		ft_is_empty(char **sudoku, int row, int col, char num);
int		ft_solve(char **sudoku, int row, int col);
int		ft_count_filled(char **str);
int		ft_check_dups(char **sudoku);

#endif
