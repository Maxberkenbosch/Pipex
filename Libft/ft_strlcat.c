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
