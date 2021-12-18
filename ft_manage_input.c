/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:41:41 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/18 18:50:58 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_list	*ft_lstnew(int num);
void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_error_exit(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_SUCCESS);
}
/*
int	ft_check_repeated(t_list *lst)
{
	(void)lst;
	return (1);
}
*/
/*
void	ft_print_list(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		printf("%d\n", lst->num);
		lst = lst->next;
	}
}
*/

t_list	**ft_create_stack(t_list **lst, int argc, char **argv)
{
	int		i;
	int		j;
	char	**str;
//	t_list	*node;

//	printf("%p\n", lst);
	i = 1;
/*	j = ft_atoi(argv[i]);
	printf("%d\n", j);

	
	j = ft_atoi(argv[2]);
	printf("%d\n", j);
	wololo = ft_lstnew(j);
	printf("--->%d\n", wololo->num);
	printf("--->%p\n", wololo->next);
*/
	while (i < argc)
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[j])
		{
		//	if (ft_isnum(str[j]))
//				node = ft_lstnew(ft_atoi(str[j]));
				ft_lstadd_back(lst, ft_lstnew(ft_atoi(str[j])));
//			write(1, "WOLOLO\n", 7);
			//free(str[j]);
		//	else
		//	{
		//		write(1, "Error\n", 6);
		//		exit(EXIT_SUCCESS);
		//	}
			j++;
		}

		//free(str);
		i++;
	}
	return (0);
}

t_list	*ft_lstnew(int num)
{
	t_list	*new;
	
	new = malloc(sizeof(t_list));
	if (!new)
		exit(EXIT_FAILURE);
	new->num = num;
	new->next = NULL;
	return (new);
}

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

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



