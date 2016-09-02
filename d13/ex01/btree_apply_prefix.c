/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 23:39:04 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/26 23:42:20 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bt_btree.h"

void	btree_apply_prefix(t_btree *root, void(*applyf)(void *))
{
	t_btree *temp;

	temp = (t_btree*)malloc(sizeof(t_btree));
	if (temp)
	{
		temp->item = item;
		temp->left = item;
		temp->right = item;
	}
}
