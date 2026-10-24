#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*res;
	size_t	total;

	if (n != 0 && size > ((size_t)-1) / n)
		return (NULL);
	total = n * size;
	res = malloc(total);
	if (!res)
		return (NULL);
	ft_bzero(res, total);
	return (res);
}
