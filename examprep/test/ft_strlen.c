/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 05:07:53 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/29 05:28:16 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{	
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}	
	return (i);
}

int	main(void)
{
	printf("%d\n", ft_strlen("Hello"));	
	return (0);
}
