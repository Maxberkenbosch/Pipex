#include "libft.h"
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nlst;

	nlst = lst;
	while (nlst)
	{
		if (nlst->next == NULL)
			return (nlst);
		else
			nlst = nlst->next;
	}
	return (nlst);
}
