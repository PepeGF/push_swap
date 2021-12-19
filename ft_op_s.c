/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 11:28:48 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/19 13:21:14 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **lst)
{
	t_list	*aux;

/*	if (ft_lstlen < 2)
	{
		return ;
	}
*/	aux = (*lst)->next->next;
	(*lst)->next->next = *lst;
	(*lst) = (*lst)->next;
	(*lst)->next = aux;
	//return (lst);
}

