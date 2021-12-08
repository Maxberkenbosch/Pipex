#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	if (len > ft_strlen(s) - start)
		return (ft_strdup(s + start));
	sub = malloc ((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start] && len > 0)
	{
		len--;
		sub[i++] = s[start++];
	}
	sub[i] = '\0';
	return (sub);
}
