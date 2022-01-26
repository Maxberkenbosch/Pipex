/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 16:16:22 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 16:20:11 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		uc;
	const char	*ptr;

	ptr = s;
	uc = c;
	while (n > 0)
	{
		n--;
		if (*ptr == uc)
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}
