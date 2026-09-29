#include "libft.h"

int	ft_atoi(char *str)
{
	int	z;
	int	res;
	int	sign;

	z = 0;
	res = 0;
	sign = 1;
	while (str[z] == 32 || str[z] >= 9 && str[z] <= 13)
		z++;
	if (str[z] == '-' || str[z] == '+')
	{
		if (str[z] == '-')
			sign = -1;
		z++;
	}
	while (str[z] >= '0' && str[z] <= '9')
	{
		res = res * 10 + (str[z] - '0');
		z++;
	}
	return (res * sign);
}
