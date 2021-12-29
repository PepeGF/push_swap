/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:00:39 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/29 21:21:34 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_lstmin_partial(t_list *lst);

void	ft_range(t_list *lst)
{
	int		len;
	int		order;
	t_list	*aux;

	len = ft_lstsize(lst);
	order = 1;
	aux = lst;
	while (order <= len)
	{
		if (aux->num == ft_lstmin_partial(lst))
		{
			aux->range = order;
			order++;
		}
		aux = aux->next;
	}
}

static int	ft_lstmin_partial(t_list *lst)
{
	int		min;
	t_list	*aux;

	aux = lst;
	while (aux->range != -1)
	{
		aux = aux->next;
	}
	min = aux->num;
	while (aux->next)
	{
		if (aux->next->num < min && aux->next->range != -1)
			min = aux->next->num;
		aux = aux->next;
	}
	return (min);
}
