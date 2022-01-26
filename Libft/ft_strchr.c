/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 16:17:37 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 16:22:01 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	charc;
	int		strl;

	charc = c;
	strl = (ft_strlen(s) + 1);
	while (strl)
	{
		strl--;
		if (charc == *s)
			return ((char *)s);
		s++;
	}
	return (0);
}
