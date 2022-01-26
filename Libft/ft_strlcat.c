/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 16:17:48 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 16:22:11 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	if (dstsize > dst_len)
		ft_strlcpy(&dst[dst_len], src, (dstsize - dst_len));
	else
		return (ft_strlen(src) + dstsize);
	dst_len += ft_strlen(src);
	return (dst_len);
}
