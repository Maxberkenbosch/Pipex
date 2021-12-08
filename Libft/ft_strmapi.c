#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*string;

	i = 0;
	if (!s || !f)
		return (0);
	string = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!string)
		return (0);
	while (s[i])
	{
		string[i] = s[i];
		i++;
	}
	string[i] = '\0';
	i = 0;
	while (string[i])
	{
		string[i] = (*f)(i, string[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
