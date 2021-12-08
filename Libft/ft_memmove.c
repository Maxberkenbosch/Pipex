#include "libft.h"
static char	*ft_small_dst(int len, char *d, const char *s);

static char	*ft_big_dst(int len, char *lastd, const char *lasts);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		*lastd;
	const char	*lasts;

	d = dst;
	s = src;
	lastd = d + (len - 1);
	lasts = s + (len - 1);
	if (dst == 0 && src == 0)
		return (0);
	if (d < s)
		d = ft_small_dst(len, d, s);
	else
		d = ft_big_dst(len, lastd, lasts);
	return (dst);
}

static char	*ft_small_dst(int len, char *d, const char *s)
{
	while (len)
	{
		len--;
		*d = *s;
		d++;
		s++;
	}
	return (d);
}

static char	*ft_big_dst(int len, char *lastd, const char *lasts)
{
	while (len)
	{
		len--;
		*lastd = *lasts;
		lastd--;
		lasts--;
	}
	return (lastd);
}
