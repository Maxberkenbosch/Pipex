#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	ps1 = s1;
	ps2 = s2;
	while (n > 0)
	{
		if (*ps1 != *ps2)
			return (*(unsigned char *)ps1 - *(unsigned char *)ps2);
		ps1++;
		ps2++;
		n--;
	}
	return (0);
}
