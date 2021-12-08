#include "libft.h"

static int		ft_count_num(int n);

static char		*ft_positive(char *return_value, long n, int count);

static char		*ft_negative(char *return_value, long n, int count);

static char		*ft_zero(char *return_value);

char	*ft_itoa(int n)
{
	char	*return_value;
	int		count;
	long	nbr;

	nbr = n;
	return_value = NULL;
	count = ft_count_num(nbr);
	if (nbr >= 0)
		return_value = malloc(count * sizeof(char));
	else
		return_value = malloc((count + 1) * sizeof(char));
	if (!return_value)
		return (0);
	if (nbr == 0)
		ft_zero(return_value);
	if (nbr >= 0)
		return (ft_positive(return_value, nbr, count));
	else
		return (ft_negative(return_value, nbr, count));
}

static int	ft_count_num(int n)
{
	int	i;

	i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	if (i == 1)
		i++;
	return (i);
}

static char	*ft_positive(char *return_value, long n, int count)
{
	count --;
	return_value[count] = '\0';
	count--;
	while (n > 0)
	{
		return_value[count] = (n % 10) + '0';
		n /= 10;
		count--;
	}
	return (return_value);
}

static char	*ft_negative(char *return_value, long n, int count)
{
	return_value[count] = '\0';
	count--;
	n *= -1;
	while (n != 0)
	{
		return_value[count] = (n % 10) + '0';
		n /= 10;
		count--;
	}
	return_value[count] = '-';
	return (return_value);
}

static char	*ft_zero(char *return_value)
{
	return_value[0] = '0';
	return_value[1] = '\0';
	return (return_value);
}
