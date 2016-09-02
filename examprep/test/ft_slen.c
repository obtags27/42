/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 17:11:20 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/29 17:20:58 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_slen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{	
		i++;
	}	
		return (i);
}

int	main()
{
	printf("%d\n", ft_slen("Hello"));
	return (0);
}
