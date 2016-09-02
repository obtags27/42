/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 23:11:17 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/26 23:31:07 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "bt_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *temp;

	temp = (t_btree*)malloc(sizeof(t_btree));
	if (temp)
	{
		temp->item = item;
		temp->left = NULL;
		temp->right = NULL;
	}
	return (temp);
}
