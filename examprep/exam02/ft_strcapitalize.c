/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 14:40:39 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/26 15:10:55 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int alpha_num(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int start_word;
	int i;

	start_word = 1;
	i = 0;
	while (str[i])
	{
		if (is_lower(str[i]) && start_word)
			str[i] -= 32;
		else if (is_upper(str[i]) && !start_word)
			str[i] += 32;
		if (alpha_num(str[i]))
			start_word = 0;
		else
			start_word = 1;
		i++;
	}
	return (str);
}
