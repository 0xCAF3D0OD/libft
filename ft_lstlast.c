#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list *last;
	//int	len;

	//len = ft_lstsize(lst);
	last = lst;
	while (last->next)
		last = last->next;

	return (last);
}

int	main(void)
{
	t_list	*lst;
	t_list	*last;


	lst = ft_lstnew("done\n");
	ft_lstadd_front(&lst, ft_lstnew("new\n"));
	ft_lstadd_front(&lst, ft_lstnew("one\n"));
	ft_lstadd_front(&lst, ft_lstnew("first\n"));

	last = ft_lstlast(lst);
	printf("last = %s\n", (char *)last->content);

	return (0);
}