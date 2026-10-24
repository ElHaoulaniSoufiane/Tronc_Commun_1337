#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		slen;
	size_t		sub_len;
	char		*res;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	sub_len = slen - start;
	if (sub_len > len)
		sub_len = len;
	res = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (!res)
		return (NULL);
	ft_memcpy(res, s + start, sub_len);
	res[sub_len] = '\0';
	return (res);
}
