/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:41:41 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/21 13:15:16 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_exit(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_SUCCESS);
}

void	ft_print_list(t_list *lst)
{
	t_list	*aux;

	if (!lst)
		return ;
	aux = lst;
	while (aux)
	{
		printf("%ld\n", aux->num);
		aux = aux->next;
	}
}

t_list	**ft_create_stack(t_list **lst, int argc, char **argv)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	while (i < argc)
	{
		j = -1;
		str = ft_split(argv[i], ' ');
		while (str[++j])
		{
			if (!ft_isnum(str[j]))
			{
				ft_lstadd_back(lst, ft_lstnew(ft_atoi(str[j])));
				free(str[j]);
			}
			else
			{
				ft_error_exit();
			}
		}
		free(str);
		i++;
	}
	return (0);
}