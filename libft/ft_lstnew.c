#include "libft.h"

t_list	*ft_lstnew(int num)
{
	t_list	*new;
	
	new = malloc(sizeof(t_list));
	if (!new)
		exit(EXIT_FAILURE);
	new->num = num;
	new->range = -1;
	new->next = NULL;
	return (new);
}
