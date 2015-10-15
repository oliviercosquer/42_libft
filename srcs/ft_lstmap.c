/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/28 14:46:43 by olivier           #+#    #+#             */
/*   Updated: 2015/10/08 23:42:21 by ocosquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*new_elem;

	new_list = NULL;
	while (lst)
	{
		new_elem = f(lst);
		if (new_elem)
		{
			if (!new_list)
				new_list = new_elem;
			else
				ft_lstadd_end(new_list, new_elem);
			lst = lst->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (new_list);
}
