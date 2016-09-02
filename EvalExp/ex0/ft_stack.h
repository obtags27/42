/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 01:46:48 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/28 02:07:06 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

typedef	struct		s_queue
{
	struct s_queue	*left;
	struct s_queue	*right;
	void			*item;
}					t_queue;

typedef struct		s_stack
{
	struct element	*contents;
	int				top;
	int				maxsize;
}					t_stack;






#endif
