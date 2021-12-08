#include "libft.h"
static int	ft_begin(char const *s1, char const *set);

static int	ft_end(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			begin;
	const char	*ptrs;
	int			size;

	if (!s1 || !set)
		return (0);
	i = 0;
	begin = ft_begin(s1, set);
	if (begin == (int)ft_strlen(s1))
		return (ft_strdup("\0"));
	ptrs = s1;
	size = ((ft_end(s1, set) - ft_begin(s1, set)));
	return (ft_substr(s1, begin, size));
}

static int	ft_begin(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	check = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j++])
				check = 1;
		}
		if (check == 1)
		{
			i++;
			j = 0;
			check = 0;
		}
		else
			return (i);
	}
	return (i);
}

static int	ft_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	check;

	i = (ft_strlen(s1) - 1);
	j = 0;
	check = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				check = 1;
			j++;
		}
		if (check == 1)
		{
			i--;
			j = 0;
			check = 0;
		}
		else
			return (i + 1);
	}
	return (0);
}
