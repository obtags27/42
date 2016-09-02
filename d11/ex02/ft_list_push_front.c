/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 22:52:02 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/24 22:59:44 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *listmove;

	listmove = ft_create_elem(data);
	if (*begin_list == NULL)
		*begin_list = listmove;
	else
	{
		listmove->next = *begin_list;
		*begin_list = listmove;
	}
}
