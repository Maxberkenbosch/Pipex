#include "libft.h"
char	*ft_strjoin(char *temp_str, char *buf)
{
	char	*str;
	int		l1;
	int		l2;

	if (!temp_str)
	{
		temp_str = malloc(1 * sizeof(char));
		temp_str[0] = '\0';
	}
	if (!temp_str || !buf)
		return (0);
	l1 = ft_strlen((char *)temp_str);
	l2 = ft_strlen((char *)buf);
	str = malloc((l1 + l2 + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_memmove(str, (char *)temp_str, l1);
	ft_memmove(str + l1, (char *)buf, l2);
	str[l1 + l2] = '\0';
	free(temp_str);
	return (str);
}
