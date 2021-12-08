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
