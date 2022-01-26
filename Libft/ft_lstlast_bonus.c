/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 16:16:09 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 16:20:00 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
