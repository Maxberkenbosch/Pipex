int	ft_atoi(const char *str)
{
	long int	total;
	int			min_plus;

	total = 0;
	min_plus = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			min_plus = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		total = total * 10 + (*str - 48);
		str++;
	}
	return (total * min_plus);
}
