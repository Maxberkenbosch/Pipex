#include "libft.h"
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*nlst;

	i = 0;
	nlst = lst;
	while (nlst)
	{
		i++;
		nlst = nlst->next;
	}
	return (i);
}
