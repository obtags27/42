/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 22:32:20 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/21 16:33:58 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s2[i] == '*' && s1[i] != s2[i])
			return (s1[i]);
		i++;
		if (s1[i] == s2[i])
		i++;
	}	
}

int	match(char *s1, char *s2)
{
	if (ft_strcmp(char *s1, char *s2))
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", match("theman.c", "*.c"));
}
