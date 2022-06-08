#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list 	*list;

	list = (t_list *)malloc(sizeof(t_list));
	list->content = content;
	list->next = NULL;

	return (list);
}

