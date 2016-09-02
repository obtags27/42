/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_filled.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 23:21:22 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/21 23:21:23 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_filled(char **argv)
{
	int i;
	int j;
	int count;

	i = 1;
	count = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] != '.')
				count++;
			j++;
		}
		i++;
	}
	if (count >= 17)
		return (1);
	else
		return (0);
}
