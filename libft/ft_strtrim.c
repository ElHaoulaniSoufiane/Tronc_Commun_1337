#include "libft.h"

static size_t	in_set(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		*res;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (i < j && in_set(s1[i], set))
		i++;
	while (i < j && in_set(s1[j - 1], set))
		j--;
	if (i >= j)
		return (ft_strdup(""));
	res = (char *)malloc((j - i) + 1);
	if (!res)
		return (NULL);
	k = 0;
	while (i < j)
		res[k++] = s1[i++];
	res[k] = '\0';
	return (res);
}
