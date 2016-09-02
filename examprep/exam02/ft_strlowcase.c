/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 14:26:16 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/31 23:39:29 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{	
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

// function that transforms every letter of every word to lowercase

/*int	main()
{	
	char *str = "HELLO";

	printf("%s\n", ft_strlowcase(str));
	return (0);
}
*/ 
// need to fix main, getting bus error 

typedef struct {
	char*	s1;
}			t_testcase;

char		*ft_strlowcase(char *s1);

t_testcase	g_testcases[] = {
	{"BY"},
	{"BB"},
	{"QWERTYUIOPASDFGHJKLZXCVBNM"},
	{"ÉÈÂ, Î OR ÔÑÜ OR ÏÇ"},
	{"BY"},
	{"SHORT long STRING"},
	{"SHORT LONG STRING"},
	{"SHORT"},
	{"THE RAIN IN spain"},
	{"THE RAIN IN SPAIN"},
};

int			main(void)
{
	int		i;
	char	*result;
	char	buf[100];

	i = 0;
	while (i < (int)(sizeof(g_testcases) / sizeof(t_testcase)))
	{
		strcpy(buf, g_testcases[i].s1);
		result = ft_strlowcase(buf);
		printf("tolower(%s)\n", g_testcases[i].s1);
		printf("You: %s\n", result);
		i++;
	}
	printf("\nMANUAL INSPECT\n");
	return (0);
}
