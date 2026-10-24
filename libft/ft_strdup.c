#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*res;

	i = 0;
	res = (char *)malloc(ft_strlen(str) + 1);
	if (!res)
		return (NULL);
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
