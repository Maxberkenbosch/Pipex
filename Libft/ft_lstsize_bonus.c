/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 16:16:18 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 16:20:08 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
