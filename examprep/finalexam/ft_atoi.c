/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 09:30:55 by ttaggard          #+#    #+#             */
/*   Updated: 2016/09/01 10:11:59 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*no_spaces(char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n' || (*str >= 9 && *str <= 13))	
		str++;
	return (str);
}

int	ft_atoi(char *str)
{
	int result;
	int sign;

	sign = 1;
	result = 0;
	str = no_spaces(str);
	if (*str == '-')
	{	
		sign = -1;
		str++;
	}
	if (*str == '+')
	{	
		sign = 1;
		str++;
	}
	while (*str)
	{
		if ( *str >= '0' && *str <= '9')
			result = result * 10 + (*str - '0');
		else
			break ;
		str++;
	}	
	return (result * sign);
}
