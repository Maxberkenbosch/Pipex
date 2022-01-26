/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 16:16:44 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 16:20:16 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pdst;
	const char	*psrc;

	pdst = dst;
	psrc = src;
	if (dst == 0 && src == 0)
		return (0);
	while (n > 0)
	{
		n--;
		*pdst = *psrc;
		pdst++;
		psrc++;
	}
	return (dst);
}
