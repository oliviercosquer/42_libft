#include <libft.h>

void	ft_lstadd_end(t_list *list, t_list *elem)
{
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = elem;
	}
}
