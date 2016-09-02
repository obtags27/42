/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 22:31:27 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/24 23:06:19 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *ptr;

	if (*begin_list)
	{
		ptr = *begin_list;
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = ft_create_element(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
