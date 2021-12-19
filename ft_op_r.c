/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:10:11 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/19 23:40:51 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **lst)
{
	t_list	*aux;

	if (ft_lstsize(*lst) > 1)
	{
		aux = (*lst)->next;
		ft_lstlast(*lst)->next = *lst;
		(*lst)->next = NULL;
		*lst = aux;
	}
}

void	ft_rb(t_list **lst)
{
	t_list	*aux;

	if (ft_lstsize(*lst) > 1)
	{
		aux = (*lst)->next;
		ft_lstlast(*lst)->next = *lst;
		(*lst)->next = NULL;
		*lst = aux;
	}
}

void	ft_rr(t_list **lst_a, t_list **lst_b)
{
	ft_ra(lst_a);
	ft_rb(lst_b);
}
