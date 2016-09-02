/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_exp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 23:16:09 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/28 23:46:14 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

int	it_number(char **ex)
{
	int num;

	while (**ex == ' ')
		(*ex)++;
	if (**ex == '(')
	{
		(*ex)++;
		num = it_add(ex);
		if (**ex == ')')
			(*ex)++;
		return (num);
	}
	return (ft_atoi(*ex));
}

int	it_op(char **ex)
{
	int		num;
	int		num2;
	char	oper;

	num = it_number(ex);
	while (**ex)
	{	
		while (**ex == ' ')
			(*ex)++;
		oper = **ex;
		if (oper != '/' && oper != '*' && oper != '%')
			return (num);
		(*ex)++;
		num2 = it_number(ex);
		if (oper == '/')
			num /= num2;
		else if (oper == '*')
			num *= num2;
		else
			num %= num2;
	}
	return (num);
}

int	it_add(char **ex)
{
	int		num;
	int		num2;
	char	oper;

	num = it_op(ex);
	while (**ex)
	{
		while (**ex == ' ')
			(*ex)++;
		oper = **ex;
		if (oper != '+' && oper != '-')
			return (num);
		(*ex)++;
		num2 = it_op(ex);
		if (oper == '+')
			num += num2;
		else
			num -= num2;
	}
	return (num);
}

int	eval_expr(char *ex)
{
	return (it_add(&ex));
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
