/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 19:53:05 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/17 12:05:12 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlength(char *str)
{
	int offset;

	offset = 0;
	while (*(str + offset) != '\0')
		++offset;
	return (offset);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int count;

	i = -1;
	count = 0;
	if (!to_find)
		return (str);
	while (i++ < ft_strlength(str) - ft_strlength(to_find))
	{
		j = -1;
		while (j++ < ft_strlength(to_find))
		{
			if (str[i + j] == to_find[j])
				count++;
			else
				count = 0;
			if (count == (ft_strlength(to_find)))
				return (&str[i]);
		}
	}
	return ((void*)0);
}
