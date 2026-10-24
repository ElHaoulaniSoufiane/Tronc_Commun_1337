#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*d;

	if (!lst)
		return (NULL);
	d = lst;
	while (d->next != NULL)
	{
		d = d->next;
	}
	return (d);
}
