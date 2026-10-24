#include "libft.h"

static void	ft_free_all(char **res, int i)
{
	while (i-- > 0)
		free(res[i]);
	free(res);
}

static size_t	co_word(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	*ft_fill(const char *s, char c, size_t *id)
{
	size_t	start;
	size_t	len;
	size_t	i;
	char	*res;

	start = 0;
	len = 0;
	i = 0;
	while (s[*id] == c)
		(*id)++;
	start = *id;
	while (s[start + len] && s[start + len] != c)
		len++;
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	while (i < len)
		res[i++] = s[(*id)++];
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	id;
	char	**res;
	size_t	words_count;

	if (!s)
		return (NULL);
	words_count = co_word(s, c);
	res = (char **)malloc((words_count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	id = 0;
	i = 0;
	while (i < words_count)
	{
		res[i] = ft_fill(s, c, &id);
		if (!res[i])
		{
			ft_free_all(res, i);
			return (NULL);
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}
