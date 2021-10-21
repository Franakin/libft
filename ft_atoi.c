#include "libft.h"

int	ft_atoi(const char *str)
{
	int	ret;
	int	pol;

	ret = 0;
	pol = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			pol = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		ret = ret * 10 + (*str - '0') * pol;
		str++;
	}
	return (ret);
}
