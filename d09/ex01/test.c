/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 19:18:45 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/18 20:23:29 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define AM = "A.M."
#define PM = "P.M."
#define LINE = "THE FOLLOWING TAKES PLACE BETWEEN %i .00 %s AND %i .00" 

void	ft_takes_place(int hour);
{
	int x;
	int y; 
	char a;
	char b;

	x = hour;
	y = hour2;


	if (hour == 0)
		x = 12;
	if (hour > 12)
		x = x -12;
	if (hour2 == 0)
		y = 1;
	if (hour2 == 12)
		y = y - 12;



}
