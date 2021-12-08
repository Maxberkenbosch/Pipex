#include "libft.h"
char	*ft_strdup(const char *s)
{
	char	*ptr;
	char	*pptr;

	ptr = malloc ((ft_strlen(s) * sizeof(char) + 1));
	pptr = ptr;
	if (!ptr)
		return (0);
	while (*s)
	{
		*ptr = *s;
		ptr++;
		s++;
	}
	*ptr = '\0';
	return (pptr);
}
