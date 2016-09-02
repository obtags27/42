/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:34:08 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/23 23:23:32 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int ascend;
	int descend;

	ascend = 1;
	descend = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			ascend = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			descend = 0;
		i++;
	}
	return (ascend || descend);
}
