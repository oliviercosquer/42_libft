/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/28 14:39:58 by olivier           #+#    #+#             */
/*   Updated: 2015/10/08 23:41:46 by ocosquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t content_size))
{
	t_list	*cur;
	t_list	*to_del;

	cur = *alst;
	while (alst && *alst && cur)
	{
		to_del = cur;
		cur = cur->next;
		ft_lstdelone(&to_del, del);
	}
	*alst = NULL;
}
