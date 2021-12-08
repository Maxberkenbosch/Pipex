#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (!needle_len || haystack == needle)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (*haystack && len)
	{
		if (!ft_strncmp(haystack, needle, needle_len) && needle_len <= len)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
