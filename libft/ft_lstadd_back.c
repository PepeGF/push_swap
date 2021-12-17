#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*old_last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	old_last = ft_lstlast(*lst);
	old_last->next = new;
}
