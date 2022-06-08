#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*lst;

	lst = *list;
	if (!lst)
		lst = new;
	else
	{
		while (lst->next)
			lst = lst->next;
		lst->next = new;
	}
}
