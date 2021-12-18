#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	//t_list	*aux;

	//aux = lst;
	if (!lst)
		return (0);
	//while (aux->next)
	while (lst->next)
	{
		//aux = aux->next;
		lst = lst->next;
	}
	//return (aux);
	return (lst);
}
