#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new_list;
	t_list	*new_list_total;

	new_list_total = NULL;
	while (lst)
	{
		new_list = ft_lstnew((*f)(lst->content));
		if (!new_list)
		{
			(*del)(new_list);
			return (NULL);
		}
		ft_lstadd_back(&new_list_total, new_list);
		lst = lst->next;
	}
	return (new_list_total);
}
