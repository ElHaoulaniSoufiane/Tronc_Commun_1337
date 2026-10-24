#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*d;

	if (!(*lst) || !del)
		return ;
	d = *lst;
	while (*lst)
	{
		d = d->next;
		ft_lstdelone(*lst, del);
		*lst = d;
	}
}
