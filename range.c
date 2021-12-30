/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:00:39 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/30 10:55:08 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_lstmin_partial(t_list *lst);

void	ft_range(t_list *lst)
{
	int		min_partial;
	int		len;
	int		order;
	t_list	*aux;

	(void)len;
	len = ft_lstsize(lst);
	order = 1;
	while (order <= len)
	{
		aux = lst;
	while (aux)
	{
		min_partial =  ft_lstmin_partial(lst);
		if (aux->num == min_partial)
		{
			printf("**%d**\n", aux->num);
			aux->range = order;
			ft_print_list(lst);
		}
		else
		aux = aux->next;
	}
	order++;
	}
}

static int	ft_lstmin_partial(t_list *lst)
{
	int		min;
	t_list	*aux;

	aux = lst;
	while (aux && aux->range != -1)
	{
		aux = aux->next;
	}
	min = aux->num;
	if (aux != ft_lstlast(lst))
	{
	while (aux->next)
	{
		if (aux->next->num < min && aux->next->range == -1)
			min = aux->next->num;
		aux = aux->next;
	}
	}
	return (min);
}
