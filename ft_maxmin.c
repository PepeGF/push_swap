/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:59:44 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/21 12:36:26 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_value(t_list *lst)
{
	int		max;
	t_list	*aux;

	max = lst->num;
	aux = lst;
	while (aux->next)
	{
		if (aux->next->num > max)
		{
			max = aux->next->num;
		}
		aux = aux->next;
	}
	return (max);
}

int	ft_min_value(t_list *lst)
{
	int		min;
	t_list	*aux;

	min = lst->num;
	aux = lst;
	while (aux->next)
	{
		if (aux->next->num < min)
		{
			min = aux->next->num;
		}
		aux = aux->next;
	}
	return (min);
}
