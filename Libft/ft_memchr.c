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
