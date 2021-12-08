#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (size == 0 || count == 0)
	{
		size = 1;
		count = 1;
	}
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
