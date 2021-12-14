#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

#endif
