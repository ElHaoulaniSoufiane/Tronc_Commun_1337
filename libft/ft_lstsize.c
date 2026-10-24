#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list			*d;

	if (!lst)
		return (0);
	i = 0;
	d = lst;
	while (d != NULL)
	{
		d = d->next;
		i++;
	}
	return (i);
}
