/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_orden.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:52:10 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/21 13:43:27 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_order(t_list *lst)
{
	int		check;
	t_list	*aux;

	if (!lst)
		return (1);
	check = 0;
	aux = lst;
	while (aux->next)
	{
		if (aux->num > aux->next->num)
		{
			return (0);
		}
		aux = aux->next;
	}
	return (1);
}
